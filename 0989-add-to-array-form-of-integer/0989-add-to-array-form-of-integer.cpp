class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size()-1;
        int carry= 0;
        vector<int> ans ;
        while(n>=0 || carry > 0 || k >0){
            int sum = carry ;
            if(n>=0) sum += num[n--];
            if(k>0) sum += (k%10);
            carry = sum/10 ;
            k = k/10 ;
            ans.push_back(sum%10);
        }
        reverse(ans.begin(),ans.end());
        return ans ;
    }
};