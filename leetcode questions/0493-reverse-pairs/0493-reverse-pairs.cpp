class Solution {
	vector<int> tp;   // Temporary array used for merging two arrays as we usually do in merge sort .
    void merge(vector<int>& A, int lo, int mid, int hi){
        int i = lo, j = mid, k = lo;
        while(i < mid && j < hi){
            if(A[i] < A[j]){
                tp[k]   = A[i];
                i       += 1;
            }
            else{
                tp[k]   = A[j];
                j       += 1;
            }
            k   += 1;
        }
        
        while(i < mid){
            tp[k]   = A[i];
            i       += 1;
            k       += 1;
        }
        
        while(j < hi){
            tp[k]   = A[j];
            j       += 1;
            k       += 1;
        }
        
        // copy back to A
        for(int k = lo; k < hi; k++){
            A[k] = tp[k];
        }
    }
    
	// Takes O(n) time
	// In every iteration atleast i is increasing or j .
    int reversePairsAcross(vector<int>& A, int lo, int mid, int hi){
        int countRP = 0, j = mid;
        for(int i = lo; i < mid; i++){
            while(j < hi && (A[i] / 2.0) > A[j]) j += 1;
            countRP += (j - mid);
        }
        
        // now merge in ascending order
        merge(A, lo, mid, hi);
        return countRP;
    }
    
    int reversePairs(vector<int>& A, int lo, int hi){
        // 0 reverse pairs for single item
        if(hi - lo <= 1){
            return 0;
        }
        
        // for two items
        int countRP = 0;
        if(hi - lo == 2){
            if( (A[lo] / 2.0) > A[hi - 1]){
                countRP = 1;    
            }
            
            if(A[lo] > A[hi - 1]){
                swap(A[lo], A[hi - 1]);
            }
            
            return countRP;
        }
        
        int mid = lo + (hi - lo) / 2;
        
        // count rev pairs in left subarray
        countRP     += reversePairs(A, lo, mid);
        
        //count rev pairs in right subarray
        countRP     += reversePairs(A, mid, hi);
        
        // count rev pairs which are across left and right subarray
        countRP     += reversePairsAcross(A, lo, mid, hi);
        
        return countRP;
    }
public:
    int reversePairs(vector<int>& A) {
        int n = A.size();
        if(n < 2){
            return 0;
        }
        
        tp.resize(n);
        int count = reversePairs(A, 0, A.size());
        return count;
    }
};