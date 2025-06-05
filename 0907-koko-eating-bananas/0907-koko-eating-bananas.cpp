class Solution {
private:
    long long cal_tot_hrs(vector<int> & piles,int mid)
    {
        long long totm=0;
        int n=piles.size();
        for(int i=0;i<n;i++)
        {
            totm=totm+ceil((double)piles[i]/(double)mid);
        }
        return totm;
    }
    int max_ele(vector<int> & piles)
    {
        int n=piles.size();
        int max_ele=INT_MIN;
        for(auto i: piles)
            if(i>max_ele) max_ele=i;
        return max_ele;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=max_ele(piles), ans=INT_MIN;
        while(low<=high)
        {
            int mid=(low+high)/2;
            long long tot_hrs=cal_tot_hrs(piles,mid);
            if(tot_hrs<=h)
            {
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};