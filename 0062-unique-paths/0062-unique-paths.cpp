class Solution {
public:
    int uniquePaths(int m, int n) {
        int N=m+n-2;
        double p=1;
        int var=min(m,n);
        for(int i=1;i<var;i++)
        {
            p = p * (N - i + 1) / i;

        }
        return (int)p;
    }
};

// class Solution {
// public:
//     int uniquePaths(int m, int n) {
//         long long res = 1;
//         int N = m + n - 2;
//         int K = min(m - 1, n - 1); 
        
//         for (int i = 1; i <= K; i++) {
//             res = res * (N - i + 1) / i;
//         }
//         return (int)res;
//     }
// };
