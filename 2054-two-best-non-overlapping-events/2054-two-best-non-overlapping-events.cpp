class Solution {
public:
    int findnextValidEvent(vector<vector<int>>& events,int i)
    {
        int n=events.size();
        int l=0;
        int r=n-1;
        int res=n;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(events[mid][0]>i)
            {
                res=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;

            }
        }
        return res;

    }
    int solve(vector<vector<int>>& events, int i,int count,vector<vector<int>> &dp)
    {
        int n=events.size();
        if(count ==2 || i >=n)
            return 0;
        if(dp[i][count]!=-1)
            return dp[i][count];
        int nextValidEvent=findnextValidEvent(events,events[i][1]);
        int take=events[i][2]+solve(events,nextValidEvent,count+1,dp);
        int ntake=solve(events,i+1,count,dp);

        return dp[i][count]=max(take,ntake);
    }
    int maxTwoEvents(vector<vector<int>>& events) {
        int n=events.size();
        sort(begin(events),end(events));
        vector<vector<int>> dp(n, vector<int>(3,-1));
        int count=0;
        return solve(events,0,count,dp);
    }
};