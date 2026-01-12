class Solution {
public:
bool f(vector<int>& bloomDay,int mid, int m, int k )
{
    int count = 0;      // Number of adjacent flowers bloomed
    int bouquets = 0;   // Total bouquets made
    for(int i=0;i<bloomDay.size();i++)
    {
        if(bloomDay[i]<=mid)
        {
            count++;
                // If we reach k adjacent flowers, make a bouquet
            if (count == k) 
            {
                    bouquets++;
                    count = 0;
            }
        }
            else    
                count=0;
       
    }
    return bouquets >= m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m*k>bloomDay.size()) return -1;
        int high=0;
        for(int i=0;i<bloomDay.size();i++) high=max(high,bloomDay[i]);
        int low=0;
        int ans =-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(f(bloomDay,mid,m,k))
            {
                ans=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return ans;
    }
};