class Solution {
public:
    vector<long long> kthPalindrome(vector<int>& nums, int k) {
        vector<long long> ans;
        
        int half = (k + 1) / 2;
        long long start = 1;
        
        for(int i = 1; i < half; i++){
            start *= 10;
        }

        int i = 0;
        
        while(i < nums.size()){
            long long x = start + nums[i] - 1;

            if(x >= start * 10){
                ans.push_back(-1);
                i++;
                continue;
            }

            long long pal = x;
            long long y = x;

            if(k % 2 == 1){
                y = y / 10;
            }

            while(y > 0){
                pal = pal * 10 + (y % 10);
                y /= 10;
            }

            ans.push_back(pal);
            i++;
        }

        return ans;
    }
};