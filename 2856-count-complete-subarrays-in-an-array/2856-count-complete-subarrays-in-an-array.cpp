class Solution {
public:

int countCompleteSubarrays(vector<int>& nums) {
        set<int>str;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            str.insert(nums[i]);
        }
        int i=0;
        while(i<nums.size()){
            set<int>pq;
            int j=i;
            while(j<nums.size()){
                pq.insert(nums[j]);
                if(pq.size()==str.size())
                    cnt++;
                j++;
            }
            i++;
        }
        return cnt;
}
};
