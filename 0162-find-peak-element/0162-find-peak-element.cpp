class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size() ;
        int low = 0 ;
        int high = n-1;
         int mid ;
        while(low<high){
             mid = low + (high-low)/2 ;
            if(nums[mid] > nums[mid+1]){
                high = mid ;
            }
            if(nums[mid] < nums[mid+1]){
                low = mid + 1 ;
            }
        }
        return high ; 
    }
};