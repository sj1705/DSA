class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        vector<ListNode*> parts(k, nullptr);

        // Step 1: Count the total number of nodes
        int len = 0;
        ListNode* temp = root;
        while (temp) {
            len++;
            temp = temp->next;
        }

        // Step 2: Calculate base size and remainder
        int n = len / k; // minimum nodes per part
        int r = len % k; // first 'r' parts will have one extra node

        ListNode* curr = root;
        ListNode* prev = nullptr;
        int i = 0;

        while (curr && i < k) {
            parts[i] = curr;

            int partSize = n + (r > 0 ? 1 : 0);
            r--; // decrement remaining extras

            // Move `curr` partSize times ahead
            for (int j = 0; j < partSize; j++) {
                prev = curr;
                curr = curr->next;
            }

            // Break the link for the current part
            if (prev) prev->next = nullptr;

            i++; // move to next part
        }

        return parts;
    }
};
