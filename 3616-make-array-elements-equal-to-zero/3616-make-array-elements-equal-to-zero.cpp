class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int n = nums.size();
        int ans =0;
        for(int i =0;i<n;i++){
            if(nums[i]!=0)continue;

            //left jake dekho
            vector<int>tmp = nums;
            int curr =i;
            bool left = true;
            while(curr >=0 && curr<n){
                if(tmp[curr]){
                    tmp[curr]--;
                    left= !left;
                }

                if(left){
                    curr--;
                }
                else{
                   curr++;
                }

            }
            int zcount = count(tmp.begin(),tmp.end(),0);
            if(zcount == n)ans++;

            //right jake dekho
            tmp = nums;
            bool right = true;
            curr=i;
             while(curr >=0 && curr<n){
                if(tmp[curr]){
                    tmp[curr]--;
                    right= !right;
                }

                if(right){
                    curr++;
                }
                else{
                   curr--;
                }

            }
            zcount = count(tmp.begin(),tmp.end(),0);
            if(zcount == n)ans++;
        }
        return ans;
    }
};