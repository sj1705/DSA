class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size();
        int prev=0;
        int res=0;
        for(int i=0;i<n;i++)
        {
            int cur=0;
            for(auto ch: bank[i])
            {
                if(ch=='1')
                    cur++;
            }
            res+=cur*prev;
            if(cur!=0)
                prev=cur;
        }
        return res;
    }
};