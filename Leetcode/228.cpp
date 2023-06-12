class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;

        for(int i=0; i<nums.size(); i++){
            string s;
            s += to_string(nums[i]);

            int j = i;

            while(j < nums.size()-1 && nums[j]+1 == nums[j+1]) j++;

            if(i < j){
                s += "->";
                s += to_string(nums[j]);
            }

            res.push_back(s);
            i = j;
        }

        return res;
    }
};
