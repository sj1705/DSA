class Solution {
public:
    
bool allBitsSet(unsigned int n) {
    if (n == 0) return false;
    return (n & (n + 1)) == 0;
}

    int smallestNumber(int n) {
        for(int i=n;i<=1023;i++)
        {
            if(allBitsSet(i))
                return i;
        }
        return 0;
    }
};