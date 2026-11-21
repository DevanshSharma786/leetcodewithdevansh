class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans ; 
        int n = nums.size();
        int store = -1  ; 
        int low = 0 ;
        int high = n-1;
        while(high>=low){
            int mid = low+(high-low)/2 ;
            if(nums[mid]==target){
                store = mid ; 
                high = mid -1;
            }
            else if(nums[mid]>target){
                high = mid -1 ;
            }
            else {
                low = mid+1 ;
            }
        }
        ans.push_back(store) ;
        store = -1 ;
        low = 0 ;
        high = n-1 ;
        while(low<=high){
            int mid = low +(high - low)/2 ;
            if(nums[mid] == target){
                store = mid ;
                low = mid+1 ;
            }
            else if (nums[mid]<target){
                low = mid+1 ;
            }
            else {
                high = mid - 1;
            }
        }
        ans.push_back(store) ;
        return ans ; 
    }
};