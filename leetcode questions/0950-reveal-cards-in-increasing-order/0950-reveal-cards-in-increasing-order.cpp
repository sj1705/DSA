class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) 
    {   int n = deck.size(),i=0;
        sort(deck.begin(),deck.end());
        vector<int> ans (n,0);
        queue<int> q;

        while(i<n)
        {
            q.push(i);
            i++;
        }

        for(int i=0;i<n;i++)
        {
            ans[q.front()] = deck[i];
            q.pop();
            q.push(q.front());
            q.pop();
        }

        return ans;


    }
};