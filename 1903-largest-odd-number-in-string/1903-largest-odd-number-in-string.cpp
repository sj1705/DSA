class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        int r;
        bool flag=false;
        for(int i=n-1;i>=0;i--)
        {
            if(num[i]%2!=0)
            {
                r=i;
                flag=true;
                break;
            }
        }
        if(flag)
            return num.substr(0,r+1);
        else
            return "";
    }
};