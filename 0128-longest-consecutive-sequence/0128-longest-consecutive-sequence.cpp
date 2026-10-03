class Solution {
public:
    int longestConsecutive(vector<int>& s) {
        int n = s.size();
        if(s.empty())return 0;
        unordered_set<int>st;
        for(auto x : s){
            st.insert(x);
        }
        int count = 1;
    for(auto i : st){
        if(st.find(i-1)==st.end()){
            int x = 1 ;
            while(st.find(i+x)!=st.end()){
                x++ ;
        }
        count = max(count,x) ;
    }
    }
    return count ;
    }
};