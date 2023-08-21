// Using set (O(n + 2n)) Approach
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;

        // Putting all elements in set in order to avoid duplicate elements
        for(auto it : nums){
            st.insert(it); 
        }

        int maxi = 0;
        for(auto it: nums){
            // Finding starting element of the sequence
            if(st.find(it-1) == st.end()){
                int cnt = 1;
                int x = it;
                while(st.find(x+1) != st.end()){
                    cnt++;
                    x++;
                }
                maxi = max(maxi, cnt);
            }
        }

        return maxi;
    }
};
