class Solution {
public:
    bool check(vector<vector<int>> & squares,double cur)
    {
        long double up = 0, down = 0, goal = 0;

        for(int i = 0; i < squares.size(); i++) {
            long double x = squares[i][0], y = squares[i][1], sz = squares[i][2];
        
            // update up
            if(y + sz >= cur) 
                up += sz * min(sz, (y + sz - cur));

            // update goal
            goal += sz * sz;
        }

        goal /= 2.0;
        return (up - goal <= 0);
    }
    double separateSquares(vector<vector<int>>& squares) {
        double low=INT_MAX;
        double high=INT_MIN;
        double ans;
        for(int i=0;i<squares.size();i++)
        {
            low=min(low,(double)squares[i][1]);
            high=max(high,(double)(squares[i][1]+squares[i][2]));
        }
        while(low<=high)
        {
            double mid=low+(high-low)/2;
            if(check(squares,mid))
            {
                high = ((mid * 1e6) - 1) / 1e6;
                ans=mid;
            }
            else
                low = ((mid * 1e6) + 1) / 1e6;
        }
        return ans;
        
    }
};