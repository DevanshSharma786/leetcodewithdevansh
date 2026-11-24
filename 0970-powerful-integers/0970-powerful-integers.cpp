class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        set<int>st ;
        int sum = 0 ;
       int a = 1 ;
       while(a<=bound){
        int b = 1 ; 
        while(b<=bound){
            sum = a + b ;
            if(sum <= bound){
            st.insert(sum);
            }
            if(y==1) break ;
            b *=y ;
        }
        if(x==1)break ;
        a *= x ;
       }
       vector<int>ans{st.begin(),st.end()} ;
       return ans ; 
    }
};