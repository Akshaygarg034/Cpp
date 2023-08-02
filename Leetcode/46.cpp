//              ^
//             [1, 2, 3]
//            /    |     \
//       ^           ^          ^
//   [1, 2, 3]   [2, 1, 3]  [3, 2, 1]
//        .        .            .
//        .        .            .
//        .        .            .

class Solution {
public:
    void solve(vector<int>& nums, vector<vector<int>> &res, int idx){
        if(idx == nums.size()) res.push_back(nums);

        for(int i = idx; i<nums.size(); i++){
            swap(nums[idx], nums[i]);
            solve(nums, res, idx + 1);
            swap(nums[idx], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        solve(nums ,res, 0);
        return res;
    }
};
