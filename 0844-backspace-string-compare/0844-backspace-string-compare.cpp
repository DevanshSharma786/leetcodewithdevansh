class Solution {
public: 
    string process(string ans){
        stack<char>st;
        for(int i = 0 ;i<ans.size();i++){
            if(ans[i]=='#'){
                if(!st.empty()){
                    st.pop();
                }
            }
            else{
                st.push(ans[i]);
            }
        }
        string res= "";
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res ; 
    } 
    bool backspaceCompare(string s, string t) {
        return process(s)==process(t) ;
    }
};