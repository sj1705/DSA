class Solution {
public:
    bool isPalindrome(int x) {
        int y=x;
        long long s=0;
        if(x<0)
            return false;
        while(y!=0)
        {
            s=(s*10)+y%10;
            y=y/10;
        }
        if(s==x)
            return true;
        return false;
    }
};