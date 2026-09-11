class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        vector<int> ans ;
        int n  = nums.size()-1;
        int x = n ;
        int carry = 0 ;
        while(n>=0||carry > 0){
            int sum = carry ;
            if(n==x) {
                sum += nums[n--]+1 ;
            }
            else if(n>=0){
                sum +=nums[n--];
            }
            carry = sum/10 ;
            ans.push_back(sum%10);
        }
        if(n<0 && carry > 0){
            ans.push_back(carry);
        }
        reverse(ans.begin(),ans.end());
        return ans ; 

    }
};