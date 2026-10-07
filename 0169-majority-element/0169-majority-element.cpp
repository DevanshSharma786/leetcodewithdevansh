class Solution {
public:
    int majorityElement(vector<int>& nums) {
      unordered_map<int,int>mp;
      for(int i =0;i<nums.size();i++){
        mp[nums[i]]++;
      }  
      int Max = INT_MIN ;
      for(auto ele : mp){
        int y = ele.second ;
        Max = max(Max , y ) ;
      }
      for(auto ele : mp){
        if(ele.second == Max){
            return ele.first ;
        }
      }
      return 0 ;
    }
};