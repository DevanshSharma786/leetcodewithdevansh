class Solution {
public:
void permutation(vector<vector<int>>&sop,vector<int>&ans , int i){
    if(i==ans.size()){
         sop.push_back(ans);
        return ;
    }
    unordered_set<int> mp ;
    for(int idx=i ; idx<ans.size();idx++){
        if(mp.count(ans[idx])) continue ;
        mp.insert(ans[idx]);
        swap(ans[idx],ans[i]);
        permutation(sop,ans , i+1);
        swap(ans[idx],ans[i]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>sop ;
        permutation(sop ,nums, 0);
        return sop ; 
        
    }
};