class Solution {
public:
    typedef pair<int , int> pi ;

    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> mp ;

        for(auto x : nums){
            mp[x]++;
        }

        priority_queue<pi,vector<pi>,greater<pi>> pq ;

        for(auto x : mp){
            int ele = x.first ;
            int freq = x.second;
            pair<int,int> p = {freq , -ele};
            pq.push(p);
        }

        vector<int> ans ;

        while(pq.size()>0){
            int x = pq.top().first ;
            int y = -pq.top().second ;

            while(x > 0){
                ans.push_back(y);
                x--;
            }

            pq.pop();
        }

        return ans ; 
    }
};