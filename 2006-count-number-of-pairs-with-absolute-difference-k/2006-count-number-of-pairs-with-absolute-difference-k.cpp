class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        int j = n-1 ;
        int count = 0;
        // while(i<j){
        //     int sum = nums[i]-nums[j]-k ;
        //     if(sum ==0){
        //         count++;
        //     }
        //     i++ ;
        //     j--;
        // }
        for(int i = 0;i<n-1;i++){
            for(int j = i+1;j<n;j++){
                int sum = abs(nums[i]-nums[j]) ;
                      if(sum ==k){
                        count++;
                        }
            }
        }
        return count ;
    }
};