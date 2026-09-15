class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int i = 0;
        int n = s.length();

        while(i < n) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }
            else {
                if(st.empty()) return false;

                if((s[i] == ')' && st.top() == '(') ||
                   (s[i] == '}' && st.top() == '{') ||
                   (s[i] == ']' && st.top() == '[')) {
                    st.pop();
                }
                else {
                    return false;
                }
            }

            i++;
        }

        if(st.size() == 0) {
            return true;
        }

        return false;
    }
};