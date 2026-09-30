class Solution {
public:
    typedef pair<string, int> pi;

    struct compare {
        bool operator()(pi a, pi b) {
            return a.first + b.first < b.first + a.first;
        }
    };

    string largestNumber(vector<int>& nums) {

        string ans = "";

        priority_queue<pi, vector<pi>, compare> pq;

        for(int i = 0; i < nums.size(); i++) {
            string x = to_string(nums[i]);
            pq.push({x, nums[i]});
        }

        while(!pq.empty()) {
            int y = pq.top().second;
            pq.pop();

            ans += to_string(y);
        }

        if(ans[0] == '0')
            return "0";

        return ans;
    }
};