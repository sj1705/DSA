class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
            int n = v.size(); 
    vector<int> ls;

    map<int, int> mpp;

    int mini = int(n / 3) + 1;

    for (int i = 0; i < n; i++) {
        mpp[v[i]]++;

        if (mpp[v[i]] == mini) {
            ls.push_back(v[i]);
        }
        if (ls.size() == 2) break;
    }

    return ls;
    }
};