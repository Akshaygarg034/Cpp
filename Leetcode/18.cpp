// Two pointer approach

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(),  nums.end());

        for(int i=0; i<n-3; i++){
            // To prevent duplicate ans
            if(i > 0 && nums[i] ==  nums[i-1]) continue;

            for(int j=i+1; j<n-2; j++){
                // To prevent duplicate ans
                if(j > i+1 && nums[j] == nums[j-1]) continue;

                int left = j+1; int right = n-1;

                while(left < right){
                    // Sum is added like this, in order to prevent overflow
                    long long sum = nums[i];
                    sum += nums[j];
                    sum += nums[left];
                    sum += nums[right];

                    if(sum < target) left++;

                    else if(sum > target) right--;

                    else{
                        ans.push_back({nums[i] , nums[j] , nums[left] , nums[right]});
                        left++; right--;

                        // To prevent duplicate ans
                        while(left < right && nums[left] == nums[left-1]) left++;
                        while(left < right && nums[right] == nums[right+1]) right--; 
                    }
                }
            }
        }
        return ans;
    }
};
