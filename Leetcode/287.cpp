// Two pointer approach

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        // increment slow by 1 step and fast by 2 steps, until they become equal.
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while(slow != fast);

        // When they become equal take fast to starting phase.
        fast = nums[0];

        // Now move both pointers 1 step until they meet, and they will meet at repeating element.
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }

        return fast;
    }
};
