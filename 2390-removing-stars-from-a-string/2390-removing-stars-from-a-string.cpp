class Solution {
public:
    string removeStars(string s) {
        string ans ="";
        // stack<char>st;
        // for(int i =0;i<s.length();i++){
        //         if(s[i]=='*'){
        //             if(!st.empty()){
        //             st.pop();
        //             }
        //         }
        //         else {
        //             st.push(s[i]);
        //         }
        // }
        // while(!st.empty()){
        //     char c = st.top();
        //     ans = ans+c;
        //     st.pop();
        // }
        // reverse(ans.begin(),ans.end());
        // return ans ;
        for(int i =0;i<s.length();i++){
            if(s[i]=='*'){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
        }
        return ans ;
    }
};