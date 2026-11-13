class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int m = n/3 ;
        unordered_map<int,int>mp; 
        vector<int>ans ; 
        for(int i = 0 ;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto ele : mp){
            if(ele.second > m){
               int  x = ele.first ; 
                ans.push_back(x);

            }
        }
        return ans ; 
    }
};