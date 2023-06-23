// Sort the array so that smaller intervals appear first.
// After that push 1st interval in the res.
// Traverse along the intervals.
// interval[i][0] can be equal to res_interval[0] or greater than it.
// If interval[i][0] is <= res_interval[1], then we will merge it.       e.g  res - [2, 3] , interval - [2, 4] => [2, 4]
// otherwise we will not merge it.       e.g  res - [2, 3] , interval - [4, 5]

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        sort(intervals.begin(), intervals.end());

        for(int i=0; i < intervals.size(); i++){
            // Initial case || Not merging
            if(res.empty() || intervals[i][0] > res.back()[1]){
                res.push_back(intervals[i]);
            }

            // Merging
            else{
                res.back()[1] = max(res.back()[1], intervals[i][1]);
            }
        }

        return res;
    }
};
