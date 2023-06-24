// Approach 1: When STL functions are allowed

// Move all smaller elements in nums1 and larger elements in nums2
// After that sort both arrays and simply merge.

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i = m-1, j = 0;
//         while(i >=0 && j < n){
//             if(nums1[i] > nums2[j]){
//                 swap(nums1[i] , nums2[j]);
//                 i--; j++;
//             }

//             else if(nums1[i] <= nums2[j]) break;
//         }

//         sort(nums1.begin(), nums1.begin() + m);
//         sort(nums2.begin(), nums2.end());

//         for(int i=m; i<nums1.size(); i++){
//             nums1[i] = nums2[i - m];
//         }
//     }
// };


// Approach 2: Using Gap method (Shell sort)

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Copying all elements of nums2 in nums1
        for(int i=m; i<nums1.size(); i++){
            nums1[i] = nums2[i-m];
        }

        // Applying Shell sort to sort nums1
        int gap = (m + n)/2 + (m + n) % 2;
        int i, j;

        while(gap > 0){
            i = 0; j = i + gap;

            while(j < m + n){
                if(nums1[i] > nums1[j]){
                    swap(nums1[i], nums1[j]);
                }
                i++; j++;
            }
            
            if(gap == 1) break;
            gap = gap/2 + gap % 2;
        }
    }
};
