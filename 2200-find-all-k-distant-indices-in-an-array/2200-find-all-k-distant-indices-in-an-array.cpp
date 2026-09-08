class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> ans ;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            int l = max(0,i-k);
            int r = min(n-1,i+k);
            while(l<=r){
                if(nums[l]==key){
                    ans.push_back(i);
                    break ;
                }
                l++ ;
            }
        }
        return ans ; 
    }
};