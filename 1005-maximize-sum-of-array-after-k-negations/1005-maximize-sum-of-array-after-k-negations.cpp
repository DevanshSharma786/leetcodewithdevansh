class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int , vector<int> ,greater<int>> pq ;
        int sum = 0;
        for(int i =0;i<nums.size();i++){
            pq.push(nums[i]);
            sum +=nums[i];
        }
        for(int i =0;i<k;i++){
            int el = pq.top();
            if(el==0){
                break ;
            }
            pq.pop();
            sum -=el ;
            pq.push(-1*el);
            sum += (-el) ;
        }
        return sum ; 
    }
};