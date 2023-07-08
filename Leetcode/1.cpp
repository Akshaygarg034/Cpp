// Using Map (One pass)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> ans(2);
        for(int i=0; i<nums.size(); i++){
            int req_no = target - nums[i];
            if(mp.find(req_no) != mp.end()){
                ans[0] = i;
                ans[1] = mp[req_no];
                return ans;
            }
            mp[nums[i]] = i;
        }
        return ans;
    }
};

// Using Two pointers (Not working on this code, just for understanding)

// It is not working here because after sorting, indexes are changed, so we can't return correct indexes.

// class Solution {
// public:
//     bool twoSum(vector<int>& nums, int target) {
//         sort(nums.begin(), nums.end());

//         int i=0, j = nums.size()-1;

//         while(i < j){
//             if(nums[i] + nums[j] < target) i++;
//             else if(nums[i] + nums[j] > target) j--;
//             else return true;
//         }
//         return false;
//     }
// };
