class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<bool> canbe(n+1, true);
        vector<int> trusted(n+1);
        for(vector<int> p:trust){
            canbe[p[0]] = false;
            trusted[p[1]]++;
        }
        int cnt = count(canbe.begin(), canbe.end(), true);
        int pos = -1;
        if(cnt == 2)    pos = find(canbe.begin()+1, canbe.end(), true) - canbe.begin();
        else return -1;
        if(trusted[pos] == n-1) return pos;
        else return -1;
    }
};