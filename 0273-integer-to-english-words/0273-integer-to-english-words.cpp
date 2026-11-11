class Solution {
public:
vector<string> ones = {
    "", "One", "Two", "Three", "Four",
    "Five", "Six", "Seven", "Eight", "Nine",
    "Ten", "Eleven", "Twelve", "Thirteen",
    "Fourteen", "Fifteen", "Sixteen",
    "Seventeen", "Eighteen", "Nineteen"
};
vector<string> tens = {
    "", "", "Twenty", "Thirty", "Forty",
    "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"
};
vector<string> thousands = {
    "", "Thousand", "Million", "Billion"
};
string helper(int num){
    string ans = "";
    if(num>=100){
     ans += ones[num/100] +" Hundred ";
     num%=100 ;
    }
    if(num>=20){
    ans += tens[num/10] +" ";
    num %=10 ;
    }
    if(num>0){
    ans += ones[num]+" ";
    }
    return ans ; 
}
    string numberToWords(int num) {
        if(num==0) return "Zero";
        string ans = "";
        int i = 0 ;
        while(num>0){
            int rem = num%1000;
            if(rem>0){
                string temp = helper(rem);
                if(i>0){
                temp += thousands[i];
                }
                ans = temp+" " + ans ; 
            }
            num /=1000;
            i++;
        }
        while(ans.back()==' '){
            ans.pop_back() ;
        }
       return ans ; 
    }
};