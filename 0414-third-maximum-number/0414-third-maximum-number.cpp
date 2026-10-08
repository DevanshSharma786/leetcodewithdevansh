class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        priority_queue<int,vector<int>,greater<int>>pq ;
        int k = 3 ;
        pq.push(nums[0]);
        for(int i =1 ;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
             continue ;
            }
            pq.push(nums[i]);
            if(pq.size()>k){
                 pq.pop();
            }
        } 
        if(pq.size()==3)return pq.top();
        else return nums[nums.size()-1];
    }
};