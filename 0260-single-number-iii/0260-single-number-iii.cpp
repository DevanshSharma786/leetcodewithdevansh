class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xor_all = 0 ; 
        for(int i =0;i<nums.size();i++){
            xor_all ^=nums[i];
        }
        vector<int> ans ;
        long long mask = xor_all & -xor_all ;
        int first_unique = 0;
        int second_unique = 0;
        for(int i : nums){
            if(i & mask){
                first_unique ^=i ;
            }
            else{
                second_unique ^=i ;
            }
        }
        ans.push_back(first_unique);
        ans.push_back(second_unique);
        return ans ;

    }
};