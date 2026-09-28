class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ones = 0 ;
        int Max = 0 ;
        //int i = 0 ;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==1){
                ones++;
                Max = max(Max , ones);
            }
            else{
                Max = max(Max , ones) ;
                //Max = ones ;
                ones = 0;
            }
        }
        return Max ;
    }
};