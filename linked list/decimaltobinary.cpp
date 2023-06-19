#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    int n,ans=0,i=0;
    cin >> n;
    while(n!=0){
        int bit=n&1;
        ans= ((bit*pow(10,i))+ans);
        n=n>>1;
        i++;
    }
    cout << ans;
}
