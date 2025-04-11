class Solution {
public:
    bool isSymmetric(int num)
    {
        string s=to_string(num);
        int len=s.length();

        if (len % 2 != 0) {
            return false;
        }
        int half=len/2;
        int firstHalf=0;
        int secondHalf=0;
        for(int i=0;i<half;i++)
        {
            firstHalf+=s[i]-'0';
            secondHalf+=s[len-i-1]-'0';
        }
        return firstHalf==secondHalf;
    }
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        while(low<=high)
        {

            if(isSymmetric(low))
                count++;
            low++;
        }
        return count;
    }
};