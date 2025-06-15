class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int  totgas=0;
        int totcost=0;

        for(int i=0;i<gas.size();i++)
        {
            totgas+=gas[i];
            totcost+=cost[i];
        }

        if(totcost>totgas)
            return -1;

        int currgas=0;
        int startind=0;
        for(int i=0;i<gas.size();i++)
        {
            currgas=currgas+gas[i]-cost[i];

            if(currgas<0)
                {
                    currgas=0;
                    startind=i+1;
                }
        }
        return startind%gas.size();
    }
};