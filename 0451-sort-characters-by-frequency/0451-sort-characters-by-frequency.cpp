class Solution {
public:
    string frequencySort(string s) {
       int n = s.length() ;
       string ans = "";
       unordered_map<char,int>mp ;
       for(int i =0;i<n;i++){
        mp[s[i]]++ ;
       } 
       priority_queue<pair<int,char>> pq;
       for(auto ele : mp){
        pq.push({ele.second,ele.first});
       }
       while(!pq.empty()){
        int freq =  pq.top().first ;
        char chara = pq.top().second ;
        while(freq > 0){
        ans += chara ;
        freq--;
        }
        pq.pop();
       }
       return ans ;
    }
};