class Solution {
public:
    void reverseString(vector<char>& s) {
        //int n = s.length();
        int i = 0;
        int j = s.size()-1;
        while(j>i){
            char temp = s[i];
            s[i] = s[j];
            s[j] =temp ;
            i++;
            j-- ;
        }
    }
};