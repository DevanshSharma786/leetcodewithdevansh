
class Solution {
public:
    string removeDigit(string number, char digit) {
        int n = number.length();
        for(int i=0;i<n;i++){
            if(number[i]==digit){
                if(i+1<n && number[i+1] > digit){
                    return number.substr(0,i)+number.substr(i+1);
                }
            }
        }
        int pos = number.rfind(digit);
        return number.substr(0,pos) +number.substr(pos+1);
    }
};
