class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
      vector<int> ans ;
        int i = 0 ;
        int j =arr.size()-1;
        while(j>i){
            int sum = arr[i]+arr[j] ;
            if(sum > target) j-- ;
            else if(sum < target) i++ ;
            else{
                    return {i+1,j+1};
            }
        }
      
      return {};
    }
};