class Solution {
public:
    void reverseString(vector<char>& s) {

	// Write your code here.
	int start = 0,end =s.size()-1;
    char temp;
	while(start<end){
		temp= s[start];
		s[start]=s[end];
		s[end]=temp;
		start++;
		end--;
	}
    }
};