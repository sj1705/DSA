class Solution {
public:
    string longestPalindrome(string s) {
        int x=0,y=0;
        int maxi=0;
        for(int i=0;i<s.size();i++)
        {
            int l=i,r=i;
            while(l>=0 and r< s.size() and s[l]==s[r])
            {
                if(r-l+1>maxi)
                {
                    maxi=r-l+1;
                    x=l;
                    y=r;
                }
                l--;r++;
            }
        }
        for(int i=0;i<s.size();i++)
        {
            int l=i,r=i+1;
            while(l>=0 and r< s.size() and s[l]==s[r])
            {
                if(r-l+1>maxi)
                {
                    maxi=r-l+1;
                    x=l;
                    y=r;
                }
                l--;r++;
            }
        }
        string str="";
        for(int i=x;i<=y;i++)
        {
            str+=s[i];
        }
        return str;
            
    }
};