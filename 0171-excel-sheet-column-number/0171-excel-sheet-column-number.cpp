class Solution {
public:
    int titleToNumber(string columnTitle) {
        int s,num=0;
        for(int i=0;i<columnTitle.length();i++)
        {
            s=(columnTitle[i]-64);
            num=num*26+s;
        }
        return num;
    }
    
};