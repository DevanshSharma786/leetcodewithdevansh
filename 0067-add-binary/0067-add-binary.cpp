class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.length()-1;
        int m = b.length()-1;
        int carry = 0;
        string result = "";
        while(n>=0 || m>=0 || carry>0){
            int sum = carry ;
            if(n>=0)sum = sum + a[n--]-'0';
            if(m>=0)sum = sum +b[m--] - '0';
            carry = sum/2 ;
            if(sum%2==0) result = result + '0';
            else result = result +'1';
        }
        reverse(result.begin(),result.end());
        return result ;
    }
};