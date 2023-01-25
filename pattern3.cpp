#include <iostream>
using namespace std;
int main(){
    int i,j,n,temp;
    cin >> n;
    i=1;
    while (i<=n)
    {
        j=1,temp=i;
        while (j<=i)
        {
            cout << temp;
            temp --;
            j++;
        }
        i++;
        cout <<endl;
        /* code */
    }
    
}