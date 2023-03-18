//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:

    void f ( int ind,int sum,vector<int> &ans,vector<int> &arr, int N){
        if(ind==N){
            ans.push_back(sum);
            return;
        }
        f(ind+1,sum+arr[ind],ans,arr,N);
        f(ind+1,sum,ans,arr,N);
        
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        f(0,0,ans,arr,N);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends