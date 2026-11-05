class Solution {
public:
int val(char ch){
    if(ch=='I')return 1;
    if(ch=='V')return 5;
    if(ch=='X')return 10;
    if(ch=='L')return 50;
    if(ch=='C')return 100;
    if(ch=='D')return 500;
    if(ch=='M')return 1000;
    return 0;
}
    int romanToInt(string s) {
        int n = s.length();
        int sum =0;
        int i =0;
        while(i<n){
            if( i+1<n && val(s[i])<val(s[i+1])){
            sum = sum - val(s[i]); // we substract the current value ;
            i++;
            }
            else{
            sum = sum+val(s[i]);
            i++;
            }
        }
        return sum ;
    }
};