class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       vector<int>ans ; 
       int Max = INT_MIN ;
       int Min = INT_MAX ; 
    unordered_map<int , int>mp ; 
       for(int i = 0 ;i<nums.size();i++){
        Min = min(Min , nums[i]);
        Max = max(Max , nums[i]);
        mp[nums[i]]++;
        }
        for(int i = Min ; i<=Max;i++){
            if(mp.find(i)==mp.end()){
                ans.push_back(i);
            }
        }
       return ans ; 
    }
};