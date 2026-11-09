class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int n = nums.size();
       int sum = 0; 
       unordered_map<int , int > mp ;
       for(int i = 0 ;i<n ; i++){
        mp[nums[i]]++ ;
       }
       for(auto ele : mp){
        if(ele.second == 1 ){
            sum += ele.first ; 
        }
       }
       return sum ;
    }
};