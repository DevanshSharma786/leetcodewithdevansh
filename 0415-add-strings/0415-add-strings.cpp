class Solution {
public:
    string addStrings(string num1, string num2) {
        string result = "";
        int a = num1.length()-1;
        int b = num2.length()-1 ;
        int carry = 0;
        while(a>=0 || b>=0 || carry>0){
            int sum = carry ;
            if(a>=0) sum = sum + num1[a--] - '0' ;
            if(b>=0) sum = sum + num2[b--] -'0';
            carry = sum/10 ;
            result += ((sum%10) + '0' );
        }
        reverse(result.begin(),result.end());
        return result ;
    }
};