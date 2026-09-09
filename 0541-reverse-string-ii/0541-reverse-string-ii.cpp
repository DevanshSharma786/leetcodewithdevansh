class Solution {
public:
    string reverseStr(string s, int k) {
        if(s.length()==1) return s ;
        int i = 0 ;
        //string v ;
        while(i<s.length()){
            reverse(s.begin()+i,s.begin()+min(i+k,(int)s.length())) ;
            i += 2*k ;
        }
        return s ;
    }
};