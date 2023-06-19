class Solution {
public:
string largestOddNumber(string num) { 
        int i;
        for( i = num.size()-1 ; i >= 0 ; --i){
            if((num[i]-48) % 2 != 0)
                break;
        }
        num.resize(i+1);
        
        return num; 
    }
};