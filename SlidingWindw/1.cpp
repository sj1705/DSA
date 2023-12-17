#include <bits/stdc++.h>

using namespace std;
#define ll long long

int n;
int arr[(int)1e5+5]

int  main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k, cin>>k;

    map<ll,int> mp;
    vector<ll> suf(n+1);
    suf[n]=0;
    for(int i=n-1;i>=0;i--) suf[i]=suf[i+1]+arr[i];

    for(int i=n;i>=0;i--)
    {
        if(mp.find(suf[i])==mp.end)
            mp[suf[i]]=i;
    }

    ll sum=accumulate(arr,arr+n,0ll);

    ll ans=6e18;
    ll cur=0;
    bool found = false;

    map<ll,int> mp2;
    mp2[0]=0;
    ll pre = 0;
    for(int i=0;i<n;i++)
    {
        pre+=arr[i];
        int req=pre-k;
        if(mp2.find(req)!=mp2.end()){
            found=true;
            ans=min(ans,1ll*i+1-mp2[req]);
        }
        mp2[pre]=i+1;
    }
    for (int i=0;i<n;i++)
    {
        cur+=arr[i];
        ll rem=k-cur;
        if(rem<0) break;
        ll q = rem/sum;
        rem %=sum;
        if(mp.find(rem)!=mp.end())
        {
            found = true;
            ans= min (ans, i+1+n-mp[rem]+q*n);
        }
    }
    if(!found) count << -1;
    else cout << ans;

    return 0 ;
};