class Solution {
public:
    int firstBadVersion(int n) {
         int s = 0, e = n;

         int minBadVersion = n;

        while(s <= e){
             int mid = s + (e-s) / 2;
            if(isBadVersion(mid)){
                minBadVersion = mid;
                e = mid - 1;
            }else{
                s = mid + 1;
            }
        }

        return minBadVersion;
    }
};