class Solution {
public:
    long long minimumCost(string s, string t, vector<string>& original, vector<string>& changed, vector<int>& cost) {
    
    //s-->source
    //t-->target

    int n = s.size();
    int m = t.size();
    if(n!=m)return -1;
    long long INF = 1e18;
    unordered_map<string,int>id;
    vector<string>all;

    auto getId = [&](const string &x)->int{
        if(id.count(x))return id[x];
        int idx = all.size();
        id[x] = idx;
        all.push_back(x);
        return idx;
    };
    for(int i=0;i<original.size();i++){
        getId(original[i]);
        getId(changed[i]);
    }

    int siz = all.size();

    vector<vector<long long>>dist(siz,vector<long long>(siz,INF));
    for(int i=0;i<siz;i++)dist[i][i] = 0;

    for(int i=0;i<original.size();i++){
        int u = id[original[i]];
        int v = id[changed[i]];
        dist[u][v] = min(dist[u][v],(long long)cost[i]);
    }

    for(int k=0;k<siz;k++){
       for(int i=0;i<siz;i++){
           for(int j=0;j<siz;j++){
              if(dist[i][k] == INF || dist[k][j] == INF) continue;
              dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
           }
       }
    } 
    unordered_map<int,vector<int>>byLen;
    int maxLen = 0;
    for(int i=0;i<siz;i++){
        byLen[all[i].size()].push_back(i);
        maxLen = max(maxLen,(int)all[i].size());
    }
    
    vector<long long>dp(n+1,INF);
    dp[n] = 0;

    for(int i=n-1;i>=0;i--){
        if(s[i]==t[i])dp[i] = dp[i+1];

        for(auto &it:byLen){
            int L = it.first;
            if(i+L>n)continue;

            string subS = s.substr(i,L);
            string subT = t.substr(i,L);

            if(!id.count(subS)||!id.count(subT))continue;

            int u = id[subS];
            int v = id[subT];

            if(dist[u][v]==INF)continue;
            if(dp[i+L]==INF)continue;

            dp[i] = min(dp[i],dist[u][v] + dp[i+L]);
        }
    }
    return dp[0] >= INF ? -1 : dp[0];
    }
};