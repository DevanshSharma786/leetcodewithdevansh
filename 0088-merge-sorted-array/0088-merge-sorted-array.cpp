class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;       // Pointer for the end of valid elements in nums1
        int j = n - 1;       // Pointer for the end of nums2
        int k = m + n - 1;   // Pointer for the absolute end of nums1
        
        // Loop while there are still elements in nums2 to process
        while (j >= 0) {
            // If nums1 still has elements and nums1[i] is greater than nums2[j]
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                // Otherwise, take the element from nums2
                nums1[k] = nums2[j];
                j--;
            }
            k--; // Move our placement pointer backward
        }
    }
};