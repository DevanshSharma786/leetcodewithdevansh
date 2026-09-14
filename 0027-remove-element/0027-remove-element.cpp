class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size() == 0) return 0;

        int count = 0;
        int i = 0;

        while(i < nums.size()){
            if(nums[i] == val){
                i++;
            }
            else {
                nums[count] = nums[i];
                count++;
                i++;
            }
        }

        return count;
    }
};