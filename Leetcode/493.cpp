class Solution {
public:
    int merge(vector<int>& nums, int l, int mid, int h){
        int ans = 0;
        int i = l, j = mid+1;

        // Before merging we are counting pairs
        for(i; i<=mid; i++){
            while(j <= h && nums[i] > 2LL * nums[j]) j++;
            ans += j - (mid+1);
        }

        vector<int> temp;
        i = l; j = mid+1;
               
        while(i <= mid && j <= h){
            if(nums[i] < nums[j]){
                temp.push_back(nums[i++]);
            }

            else{
                temp.push_back(nums[j++]);
            }
        }

        while(i <= mid) temp.push_back(nums[i++]);
        while(j <= h) temp.push_back(nums[j++]);

        for(int k=l; k<=h; k++){
            nums[k] = temp[k - l];
        }
        return ans;
    }

    int mergeSort(vector<int>& nums, int l, int h){
        int ans = 0;
        if(l < h){
            int mid = (l + h)/2;
            ans += mergeSort(nums, l, mid);
            ans += mergeSort(nums, mid+1, h);
            ans += merge(nums, l, mid, h);
        }
        return ans;
    }

    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size()-1);
    }
};
