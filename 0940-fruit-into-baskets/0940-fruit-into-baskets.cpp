class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0,r=0,maxlen=0;
        map<int, int> mpp;
        while(r<fruits.size())
        {
            mpp[fruits[r]]++;
            if(mpp.size()>2)
            {
                mpp[fruits[l]]--;
                if (mpp[fruits[l]] == 0) mpp.erase(fruits[l]);
                l++;
            }
            if(mpp.size()<=2)
            {
                maxlen=max(maxlen,r-l+1);
            }
         
            r++;
        }
        return maxlen;
    }
};