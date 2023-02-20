class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int i,j;
        for (i = 0; i <heights.size()-1; i++){
        // Last i elements are already 
        // in place
        for (j = 0; j < heights.size()-i-1; j++)
            if (heights[j] > heights[j + 1]){
                swap(heights[j], heights[j + 1]);
                swap(names[j], names[j + 1]);
            }
        }
        reverse(names.begin(),names.end());

        return names;
    }
};