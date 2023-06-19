// In the dictionary like :
//   1 2 3      -    Increasing order
//   1 3 2
//   2 1 3
//   2 3 1
//   3 1 2
//   3 2 1      -    Decreasing order

// Here we can say that elements start from increasing order.   (each element is smaller than its next element)
// Our goal is to convert them in decreasing order.   (each element is greater than its next element)
// For that some swap operation is happening on each step in order to make each element greater than its next.
// We can also see swap is happening from the last. i.e After 1 2 3 we got 1 3 2.
// We are swapping that element (which is dis-obeying the condition) with its next greater element

// Let us take example of 3 4 0 0
    // Start finding from last that each element is greater than next or not.
    // We find 3, which is not greater than its next element.
    // Now we need to swap it with next higher element which is 4.
    // But after swapping we got 4 3 0 0 which is not next lexicographically greater element.
    // It should be 4 0 0 3.
    // So for this we need extra step in which we have to reverse all elements after index.

// Thats how we will get our answer.

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;
        int grt = -1;

        // Finding index of element which need to be swapped
        for(int i = n-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                idx = i;
                break;
            }
        }

        // If we are not able to find idx, this means this is edge case (last element of dictionary).
        if(idx == -1){
            reverse(nums.begin(), nums.end());
            return;
        }

        // Finding greater element than idx
        for(int j = n-1; j > idx; j--){
            if(nums[j] > nums[idx]){
                grt = j;
                break;
            }
        }
        
        // Swapping idx with greater element
        swap(nums[idx], nums[grt]);

        // Reversing elements after idx
        reverse(nums.begin() + idx + 1 ,  nums.end());
    }
};
