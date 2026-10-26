class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.length();
        string ans = "";
        stack<int>st ; 
        int i = 0;
        while(i<n){
            if(!st.empty() && k > 0 && st.top()> (num[i]-'0')){
                while( !st.empty() && k>0 && st.top()> (num[i]-'0')){
                    st.pop();
                    k--;
                }
                st.push(num[i]-'0');
                i++;
            }
            else{
           st.push(num[i]-'0');
           i++;
            }
        }
        // for handling the case os "12345" k = 2 ;  because there is no st.top()//>num[i] so we remove last two digit ; from it ; 
        while(k>0 && !st.empty()){
            st.pop();
            k--;
        }
        while(st.size()!=0){
            char ch = st.top()+'0'; // back into string ;
           ans +=ch ;
           st.pop();
        }
        reverse(ans.begin(),ans.end());
        // for handling leading zeros ;
        int j = 0;
        while(j < ans.length() && ans[j]=='0'){
            j++;
        }
        string str = ans.substr(j);
        if(str.empty()) return "0";
        else return str ;
    }
};