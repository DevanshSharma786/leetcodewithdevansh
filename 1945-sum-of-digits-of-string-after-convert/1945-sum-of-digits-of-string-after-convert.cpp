class Solution {
public:
    int getLucky(string s, int k) {
        string str ="";
        int n = s.length() ;
        for(int i =0;i<n;i++){
            int  num = s[i] - 'a' + 1 ;
            str += to_string(num) ;
        }
        int sum = 0 ;
        while(k>0){
            sum = 0 ; 
            for(int i = 0 ;i<str.length();i++){
                int ch = str[i] - '0';
                sum += ch ;
            }
            str = to_string(sum) ;
            k-- ;  
        }
        return sum ; 
    }
};