class Solution {
public:
    string minWindow(string s, string t) {
        int m = t.size();
        if(m > s.size())    return "";
        vector<int> hash(256 , 0);
        for(int i = 0; i < m; i++) hash[t[i]]++;
        int l = 0, r = 0, cnt = 0, minLen = 1e9, sInd = -1;
        while(r < s.size()){
            if(hash[s[r]] > 0)  cnt ++;
            hash[s[r]] --;
            while(cnt == m){
                if(r - l + 1 < minLen){
                    minLen = r - l + 1;
                    sInd = l;
                }
                hash[s[l]]++;
                if(hash[s[l]] > 0) cnt --;
                l++;
            }
            r++;
        }
        return sInd == -1 ? "" : s.substr(sInd , minLen);
    }
};