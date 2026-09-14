class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1;
        int count = 1;
        int j = 0;
        while(i<nums.size()){
            if(nums[i]!=nums[i-1]){
                nums[count] = nums[i] ;
                 count++ ;
                 i++ ;
            }
            else {
                    i++;
            }
            //i++ ;
        }
        return count;
    }
};