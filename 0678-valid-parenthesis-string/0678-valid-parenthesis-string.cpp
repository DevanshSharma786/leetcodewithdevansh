class Solution {
public:
    bool checkValidString(string s) {
        int openmn = 0 ;
        int openmx = 0 ;
        //int Max = 0;
        int i=0 ;
        while(i<s.length()){
            if(s[i]=='('){
                openmn++ ;
                openmx++;
            }
            if(s[i]==')') {
                openmx--;
                openmn-- ;
        }
        if(s[i]=='*'){
            openmn--;
            openmx++ ;
        }
        if(openmx<0){
            return false ;
        }
        openmn = max(0,openmn);
        i++ ;
        }
        if(openmn==0) return true ;
        else return false ;
    }
};