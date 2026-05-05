class Solution {
public:
    int numberOfSubstrings(string s) {
        int hash[3]={-1,-1,-1};
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            hash[s[i]-'a']=i;

            if(hash[0]!=-1 && hash[1]!=-1 && hash[2]!=-1)
            {
                c=c + 1 + min (hash[0],min(hash[1],hash[2]));
            }
        }
        return  c;
    }
};