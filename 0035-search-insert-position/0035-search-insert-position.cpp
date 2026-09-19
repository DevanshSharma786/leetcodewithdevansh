class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        stack<int> st ;
        int idx = 0 ;
        for(int i =0;i<n;i++){
            st.push(nums[i]);
        }
        int count = 0;
        if(st.top()<target) return n;
        while(st.size()>0){
            if(st.top()!=target && st.top()<target){
                idx = n-count ;
                break ;
            }
            else if(st.top()!=target && st.top()>target){ 
                st.pop() ;
                count ++;
            }
            else{ // st.top()==target
            idx = n - count - 1 ;
                break ;
            }
        }
        return idx ;
    }
};