class Solution {
public:
    bool check(vector<int>& freq)
    {
        int fre=0;
        for(int i=0;i<26;i++)
        {
            if(freq[i]==0) continue;
            if(fre==0)    fre=freq[i];
            else if(fre!=freq[i]) return false;
        }
        return true;
    }
    int longestBalanced(string s) {
        int maxL=0;
        int n=s.size();

        for(int i=0;i<n;i++)
        {
            vector<int> freq(26,0);

            for(int j=i;j<n;j++)
            {
                freq[s[j]-'a']++;
                if(check(freq))
                    maxL=max(maxL,j-i+1);
            }
        }
        return maxL;
    }
};