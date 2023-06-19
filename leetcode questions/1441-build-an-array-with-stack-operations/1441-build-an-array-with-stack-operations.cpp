class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> operations;
        int num = 1;
        
        for (int i = 0; i < target.size(); i++) {
            while (num < target[i]) {
                operations.push_back("Push");
                operations.push_back("Pop");
                num++;
            }
            
            operations.push_back("Push");
            num++;
        }
        
        return operations;
    }
};
