//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void solve(int& num, string output, int index){

        if(num == index){

            cout << output << " ";

            return;

        }

        if(index != 0 && output[index-1] == '1'){

            solve(num, output+'0', index+1);

        }

        else{

            solve(num, output+'0', index+1);

            solve(num, output+'1', index+1);

        }

        

    }

    void generateBinaryStrings(int& num){

        solve(num, "", 0);

        return;

    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        // cout << setprecision(9) << obj.switchCase(choice,vec) << endl;
        obj.generateBinaryStrings(n);
        cout << endl;
        
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends