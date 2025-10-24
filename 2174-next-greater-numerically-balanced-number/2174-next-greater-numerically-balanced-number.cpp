class Solution {
public:
    bool isbalanced(int num)
    {
        vector<int> digit(10,0);
        while(num !=0)
        {
            int n=num%10;
            digit[n]++;
            num=num/10;
        }
        for(int i=0;i<10;i++)
        {
            if(digit[i]!=0 && digit[i]!=i)
                return false;
        }
        return true;

    }
    int nextBeautifulNumber(int n) {
        for(int i=n+1;i<=1224444;i++)
        {
            if(isbalanced(i))
                return i;
        }
        return 0;
    }
};