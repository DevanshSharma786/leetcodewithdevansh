class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false ;
        int count = 0;
        while((n&1)==0){
        n = n>>1 ;
        count++;
        } 
     if(n!=1) return false ;
     if(count%2==0) return true ;
     return false ;
    }
};