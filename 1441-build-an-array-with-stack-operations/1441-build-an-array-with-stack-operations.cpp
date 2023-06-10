class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int value=1, maxi=target[target.size()-1], i=0;
        vector<string> res;
        while(value<=maxi){
            res.push_back("Push");
            if(target[i]==value){
                i++;        
            }else res.push_back("Pop");
            value++;
        }
        return res;
    }
};