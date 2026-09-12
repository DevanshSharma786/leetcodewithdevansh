class Solution {
public:
    int reverseBits(int n) {
        string res ="";
        while(n>0){
            if(n%2==0){
            res = '0' + res ;
            }
            else {
                res = '1' + res ;
            }
            n /=2 ;
        }
        while(res.size()<32){
            res = '0'+res ;
        }
        reverse(res.begin(),res.end()) ;
        int Size = res.size();
        int result = 0 ;
        for(int i = Size-1;i>=0;i--){
            char ch = res[i] ;
            int num = ch-'0' ;
            result += num*(1<<(Size-i-1)) ;
        }
        return result ;

    }
};