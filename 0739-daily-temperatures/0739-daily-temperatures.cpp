class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int>ans(n,0) ;
        stack<int>st;
        int i =0;
        while(i<n){
            while(!st.empty() && temperatures[st.top()]<temperatures[i]){
                int x = st.top();
                st.pop();
                ans[x]=abs(i-x);
            }
             st.push(i);
             i++;
        }
        return ans ;
    }
};