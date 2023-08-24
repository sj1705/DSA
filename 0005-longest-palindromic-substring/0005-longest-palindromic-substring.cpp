class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int maxl = 0 , ans = 0;
        int x = 0 , y = 0;
        //for odd length 
        for(int i = 0; i < n;i++){
            int l = i , r = i;
            
            while(l>=0 and r < n and s[l] == s[r]){
                
                int len = r-l+1;
                
                if(len > maxl){
                    maxl = len;
                    x = l;
                    y = r;
                }
                r++, l--;
            }
        }
        
        //for even length
        for(int i = 0; i < n;i++){
            int l = i , r = i+1;
            
            while(l>=0 and r < n and s[l] == s[r]){
                
                int len = r-l+1;
                
                if(len > maxl){
                    maxl = len;
                    x = l;
                    y = r;
                }
                r++, l--;
            }
        }                
        
        string str = "";
        for(int i = x;i <= y;i++){
            str += s[i];
        }
        return str;
    }
};