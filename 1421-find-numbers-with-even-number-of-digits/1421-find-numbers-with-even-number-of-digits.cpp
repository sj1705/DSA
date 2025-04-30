class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c=0;
        int digcount=0;
        for(auto i : nums)
        {   
            digcount=0;
            while(i!=0)
            {
                i=i/10;
                digcount++;
            }
            if(digcount%2==0)
                c++;
        }
        return c;
    }
};