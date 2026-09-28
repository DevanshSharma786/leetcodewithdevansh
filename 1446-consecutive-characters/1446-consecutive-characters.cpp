class Solution {
public:
    int maxPower(string s) {
        int count = 1 ;
        int Max = 0;
        for(int i = 0;i<s.length();i++){
            if(i >= 1 && s[i]==s[i-1] ){
                count +=1;
                Max = max(Max,count);
            }
            else{
                Max = max(Max , count) ;
                count = 1;
            }
        }
        return Max ;
    }
};