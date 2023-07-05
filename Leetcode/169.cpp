// Using map

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         unordered_map<int, int> mp;
//         for(int i=0; i<nums.size(); i++){
//             mp[nums[i]]++;
//         }

//         for(auto it: mp){
//             if(it.second > nums.size()/2) return it.first;
//         }
//         return 0;
//     }
// };

// Using Moore's Voting algorithm

// It is based upon the fact that;
// if we take a cnt variable and el (to store element) variable.
// On traversing if nums[i] == el then increase count else decrease.
// So, if element is appearing more than n/2 times then definately its cnt will != 0 in the end and it will be stored in el variable at that time.

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int el = 0;

        for(int i=0; i<nums.size(); i++){
            if(cnt == 0){
                el = nums[i];
                cnt = 1;
            }

            else if(nums[i] == el){
                cnt++;
            }

            else{
                cnt--;
            }
        }

        // If there is no surity that majority element always exist
        // cnt = 0;
        // for(auto it: nums){
        //     if(it == el) cnt++;
        // }

        // return cnt > nums.size()/2 ? el : -1;

        return el;
    }
};
