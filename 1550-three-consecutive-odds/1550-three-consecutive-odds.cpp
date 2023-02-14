// class Solution {
// public:
//     bool threeConsecutiveOdds(vector<int>& arr) {
//         for(int i=0;i<arr.size()-3;i++)
//         {
//             if(arr[i]%2!=0 && arr[i+1]%2!=0 && arr[i+2]%2!=0 )
//             {
//                 return 1;
//             }
//         }
//         return 0;
//     }
// };


class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
    int odds = 0;
    for (auto i = 0; i < arr.size() && odds < 3; ++i)
        odds = arr[i] % 2 ? odds + 1 : 0;
    return odds == 3;
}
};

// class Solution {
// public:
// 	bool threeConsecutiveOdds(vector<int>& arr) {
// 		int n = arr.size();
// 		for(int i = 0 ; i < n - 2 ; i++){
// 			if(arr[i]%2 && arr[i+1]%2 && arr[i+2]%2) return true;
// 		}
// 		return false;
// 	}
// };