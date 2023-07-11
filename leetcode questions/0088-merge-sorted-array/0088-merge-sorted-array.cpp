class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    //     int s1=0,s2=0,s3=0,e1=m-1,e2=n-1;
    //     vector<int> nums3;
    //     while(e1>0&&e2>0)
    //     {
    //         if(nums1[s1]<nums2[s2]){
    //             nums3.push_back(nums1[s1]);
    //             s1++;
    //             s3++;
    //         }
    //         else{
    //             nums3.push_back(nums2[s2]);
    //             s2++;
    //             s3++;
    //         }
    //     }
    // }
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        }
        else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }
    while (j >= 0) {
        nums1[k] = nums2[j];
        k--;
        j--;
    }
}

};