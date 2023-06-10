class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> v;
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(target[j]==i+1)
            {
                j++;
                v.push_back("Push");
                if(j==target.size())
                {
                    return v;
                }
            }
            else
            {
                v.push_back("Push");
                v.push_back("Pop");
            }
        }
        return v;
    }
};