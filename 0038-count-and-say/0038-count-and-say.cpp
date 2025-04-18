
class Solution {
public:
    std::string countAndSay(int n) {
        std::string s = "";
        while (n--) {
            if (s == "") {
                s += "1";
                continue;
            } else {
                int count = 1;
                std::string s_new = "";
                for (int i = 0; i < s.length(); ++i) {
                    if (i + 1 < s.length() && s[i] == s[i + 1]) {
                        count++;
                    } else if (i + 1 < s.length() && s[i] != s[i + 1]) {
                        s_new += std::to_string(count);
                        s_new += s[i];
                        count = 1;
                    }
                }
                s_new += std::to_string(count);
                s_new += s[s.length() - 1];
                s = s_new;
            }
        }
        return s;
    }
};