class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> res_l(boxes.size(), 0);
        vector<int> res_r(boxes.size(), 0);
        int lc = 0;
        int rc = 0;
        for (int j = 0; j < boxes.size(); j++) {
            if (j > 0) {
                res_l[j] += res_l[j - 1] + lc;
            }
            if (boxes.at(j) == '1') {
                lc++;
            }
        }
        for (int j = boxes.size() - 1; j >= 0; j--) {
            if (j < boxes.size() - 1) {
                res_r[j] += res_r[j + 1] + rc;
            }
            if (boxes.at(j) == '1') {
                rc++;
            }
        }

        for (int j = 0; j < res_l.size(); j++) {

            res_l[j] += res_r[j];
        }

        return res_l;
    }
};