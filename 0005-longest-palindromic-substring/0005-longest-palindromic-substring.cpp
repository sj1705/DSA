class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length()<=1) return s;
        int maxlen=0;
        int n=s.length();
        int start=0;
        
        for(int i=0;i<n;i++)
        {
            // Check for odd-length palindrome
            int l=i,r=i;
            while(l>=0 && r<n && s[l]==s[r])
            {
                if((r-l+1)>maxlen)
                {
                    maxlen=r-l+1;
                    start=l;
                }
                l--;
                r++;
            }

            // Check for even-length palindrome
            l=i,r=i+1;
            while(l>=0 && r<n && s[l]==s[r])
            {
                if((r-l+1)>maxlen)
                {
                    maxlen=r-l+1;
                    start=l;
                }
                l--;
                r++;
            }
        }
        return s.substr(start,maxlen);
    }
};
