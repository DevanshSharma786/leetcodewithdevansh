class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size() ;
        sort(nums.begin(),nums.end()) ;
        unordered_map<int , int>mp ;
        for(int i =0;i<n;i++){
            mp[nums[i]]++ ;
        }
        int ans = -1 ;
        int maxfreq = 0 ;
        for(auto ele : mp){
            if(ele.first%2==0){
                maxfreq = max(maxfreq , ele.second ) ;
            }
        }
        for(auto ele : mp){
            if(ele.first%2==0 && ele.second == maxfreq){
                if(ans ==-1 || ele.first<ans){
                    ans = ele.first ;
                }
            }
        }
        return ans ;
    }
};