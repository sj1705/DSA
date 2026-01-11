class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
unordered_map<int, int> mapping; // val -> next_greater
stack<int> st;

// Calculate NGE for nums2 and store in a map
for(int i = nums2.size() - 1; i >= 0; i--) {
    while(!st.empty() && st.top() <= nums2[i]) st.pop();
    
    mapping[nums2[i]] = st.empty() ? -1 : st.top();
    st.push(nums2[i]);
}

// O(1) lookup for each element in nums1
vector<int> ans;
for(int x : nums1) {
    ans.push_back(mapping[x]);
}
return ans;
    }
};