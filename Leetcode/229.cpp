class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int cnt1 = 0 , cnt2 = 0;
        int el1 = 0, el2 = 0;

        // Same as majority element I question, but for two elements
        for(int i=0; i<n; i++){
            // nums[i] != el2 or el1 conditions are also included, so that el1 and el2 will be unique.
            if(cnt1 == 0 && nums[i] != el2){
                el1 = nums[i];
                cnt1 = 1;
            }

            else if(cnt2 == 0 && nums[i] != el1){
                el2 = nums[i];
                cnt2 = 1;
            }

            else if(nums[i] == el1) cnt1++;

            else if(nums[i] == el2) cnt2++;

            else{
                cnt1--; cnt2--;
            }
        }

        // To check whether el1 and el2 are required ans or not
        cnt1= 0; cnt2 = 0;

        for(auto it : nums){
            if(it == el1) cnt1++;
            else if(it == el2) cnt2++;
        }

        if(cnt1 > n/3) ans.push_back(el1);
        if(cnt2 > n/3) ans.push_back(el2);

        // Because ans is required in sorted order
        sort(ans.begin(), ans.end());
        return ans;
    }
};
