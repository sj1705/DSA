class Solution {
public:
    bool checkpre(string w1, string w2) {
        int m = w1.size();
        int n = w2.size();
        if (m > n)
            return false;
        for (int i = 0; i < m; i++) {
            if (w1[i] != w2[i])
                return false;
        }
        return true;
    }    
    bool checksuf(string w1, string w2) {
        int m = w1.size();
        int n = w2.size();
        if (m > n)
            return false;
        for (int i = m - 1; i >= 0; i--) { // Fixed loop condition
            if (w1[i] != w2[n - m + i])    // Properly compare characters
                return false;
        }
        return true;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int c = 0;
        for (int i = 0; i < words.size(); i++) {
            for (int j = i + 1; j < words.size(); j++) {
                if (checkpre(words[i], words[j]) && checksuf(words[i], words[j])) {
                    c++;
                }
            }
        }
        return c;
    }
};
