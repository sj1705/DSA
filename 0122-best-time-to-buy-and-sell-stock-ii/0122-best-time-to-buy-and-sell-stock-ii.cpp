class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n=arr.size();
        vector <int> ahead(2,0), curr(2,0);
        ahead[0]=ahead[1]=0;
        int profit=0;
        for(int ind=n-1;ind>=0;ind--)
        {
            for(int j=0;j<=1;j++)
            {
                if(j)
                {
                    profit=max (
                        -arr[ind]+ahead[0],
                        0+ahead[1]
                    );
                }
                else
                {
                    profit=max (
                        arr[ind]+ahead[1],
                        0+ahead[0]
                    );
                }
                curr[j]=profit;
            }
            ahead=curr;
        }
        return ahead[1];
    }
};