class Solution {
public:
    int findLucky(vector<int>& arr) {
        int ans=-1;
        vector<int> hash(501,0);
        for(int i=0;i<arr.size();i++)
        {
            hash[arr[i]]++;
        }

        for(int i=0;i<hash.size();i++)
        {
            if(i==hash[i])
                ans=i;
        }
        if(ans==0)  return -1;
        return ans;
    }
};