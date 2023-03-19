class Solution {
public:
    string removeOuterParentheses(string s) {
    int cnt = 0;
    string res;
    for(char x : s)
    { 
        if(x == '('&& cnt++ > 0)
        { 
            res += x;
        }
        if (x == ')' && cnt-- > 1) 
        {
            res += x;
        }
    }
    return res;
    }
};