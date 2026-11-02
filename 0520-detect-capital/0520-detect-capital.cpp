class Solution {
public:
    bool detectCapitalUse(string word) {
        int uppercase = 0;
        int n = word.length();
        for(int i=0;i<n;i++){
            if(isupper(word[i])){
                uppercase++;
            }
        }
        return uppercase==n || uppercase==0 || (uppercase==1 && isupper(word[0])) ;
    }
};