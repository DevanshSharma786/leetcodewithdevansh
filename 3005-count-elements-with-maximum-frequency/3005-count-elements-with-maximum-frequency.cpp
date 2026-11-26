class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
       unordered_map<int,int>mp ;
       int n = 0 ;
       for(int i =0;i<nums.size();i++){
        mp[nums[i]]++;
       } 
       int mxfrq = 0 ;
       for(auto ele : mp){
        mxfrq = max(mxfrq , ele.second);
        }
        for(auto ele : mp){
            if(ele.second == mxfrq){
                n+=ele.second ; 
            }
        }
       return n ; 
    }
};