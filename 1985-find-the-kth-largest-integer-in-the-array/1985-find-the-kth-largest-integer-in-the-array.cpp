class Solution {
public:
 struct Compare {
    bool operator()(const string& a, const string& b) {
        if (a.size() != b.size()) {
            return a.size() > b.size();
        }

        return a > b;
    }
};
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<string,vector<string> ,Compare > pq ;
        pq.push(nums[0]);
        for(int i =1;i<nums.size();i++){
            pq.push(nums[i]);
            if(pq.size()>k) {
                pq.pop();
            }
        }
        return pq.top();
    }
};