// In this, we take a variable mid, starting from 0 and iterate over the array.
// We move mid only if previous area got clear
// So, when mid = 0, then swap it with l. Here previous area is clear so we can move mid and l++.
// If mid = 1, we want to keep it in center so we can move mid here too.
// But when mid == 2, we will swap it with h, and then h--. But here after swapping we can get any element at mid's place.
// So that place can get 0 also and 2 also. So if we move mid, then this will stay here after that.
// So we will not move mid here and perform operations which are needed.

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0, mid = 0, h = nums.size()-1;

        while(mid <= h){
            if(nums[mid] == 0){
                swap(nums[mid], nums[l]);
                l++;
                mid++;
            }

            else if(nums[mid] == 1) mid++;

            else if(nums[mid] == 2){
                swap(nums[mid], nums[h]);
                h--;
            }
        }
    }
};
