#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int m,n;
    cin >> n>> m;
    vector<int> adj[n+1];
    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return 0;
}