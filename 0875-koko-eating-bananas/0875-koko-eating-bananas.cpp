class Solution {
public:
    int func(vector<int> piles, int mid,int h)
    {
        int sum=0;
               for(int i=0;i<piles.size();i++)
               {
                sum=sum+ceil((double)piles[i]/ (double)mid);
                if(sum>h) break;

               }
               cout<<sum<<' ';
               return sum;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=*max_element(piles.begin(),piles.end());
    //    cout<<maxi<<"--";
        int start=1;
        int end=maxi;
        int ans=0;
        while(start<=end)
        {
            int mid=(start+end)/2;
            int consume=func(piles,mid,h);
            if(consume<=h)
            {
               
              end=mid-1;
            }
            else start=mid+1;

        }
        return start;
        
    }
};