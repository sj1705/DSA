class Solution {
public:
    string removeDuplicates(string s) {
    int i=1;
        string ans; // stores the answer string
        
        ans.push_back(s[0]); // pushes the first char of the given string
        while(i<s.length())
        {
            if(ans.empty() == 0)
            {
                if(ans.back()==s[i]) // checking the char present in the ans == presenti in s
                {
                    ans.pop_back(); // removing the char
                }
                else
                {
                    ans.push_back(s[i]); // pushing the char
                }
            }
            else
            {
                ans.push_back(s[i]); // if the ans is empty
            }
            i++; // incremenet 
        }
        return ans;
    }
};