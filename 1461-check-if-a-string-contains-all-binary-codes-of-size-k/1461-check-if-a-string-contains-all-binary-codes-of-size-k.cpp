class Solution {
public:
    bool hasAllCodes(string s, int k) {
        //There should be exactly 2^k unique substrings
        unordered_set<string> st;
        
        int n          = s.length();
        int unique_sub = 1<<k; //or, pow(2,k)
            
        for(int i = k; i<=n; i++) {
            string a = s.substr(i-k, k);
            if(!st.count(a)) {
                st.insert(a);
                unique_sub--;
                
                if(unique_sub == 0)
                    return true;
            }
        }
        return false;
    }
};
