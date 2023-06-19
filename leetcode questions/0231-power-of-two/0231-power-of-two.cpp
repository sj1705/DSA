class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0;;i++){
            if (n==pow(2,i)){
                return true;
            // break;
            }
            if(pow(2,i)>n){
                return false;
                // break;
            }
        }
    }
};