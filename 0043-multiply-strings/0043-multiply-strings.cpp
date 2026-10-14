class Solution {
public:
    string multiply(string num1, string num2) {
        vector<int>ans(num1.size()+num2.size(),0) ;
        int n = num1.size() ;
        int m = num2.size();

        for(int i = n-1;i>=0;i--){
            for(int j =m-1;j>=0;j--){
                int a = num1[i]-'0';
                int b = num2[j]-'0';
                int mul= a*b;
                int sum = mul + ans[i+j+1] ;

                ans[i+j+1] = sum%10 ;
                ans[i+j] += sum/10 ;
            }
        }
        string result = "";
        for(auto digit : ans){
            if(result.empty() && digit==0) continue;
            result += to_string(digit) ;
        }
        return (result.empty()) ? "0" : result ; 
    }
};