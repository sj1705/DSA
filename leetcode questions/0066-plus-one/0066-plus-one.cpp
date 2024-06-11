class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int rem = 1;
        for(int i=digits.size()-1; i>=0; i--) {
            int temp = digits[i]+rem;
            digits[i] = temp % 10;
            rem = temp / 10;
        }
        if (rem!=0) digits.insert(digits.begin()+0, rem);
        return digits;
    }
};