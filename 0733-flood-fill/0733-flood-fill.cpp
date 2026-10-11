class Solution {
public:
        void dfs(vector<vector<int>>&image , int currRow , int currCol , int initialcolor , int color){
        int n = image.size() ;
        int m = image[0].size();
        if(currRow < 0 || currCol < 0 || currRow >= n|| currCol >=m){
            return ;
        }
        if(image[currRow][currCol]!=initialcolor)return ;
        image[currRow][currCol] = color ;
        dfs(image , currRow+1,currCol,initialcolor ,color); // dowm 
        dfs(image , currRow-1 , currCol , initialcolor , color) ; // up 
        dfs(image, currRow , currCol+1,initialcolor , color) ; // right 
        dfs(image , currRow,currCol-1 , initialcolor , color) ; //left
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(color == image[sr][sc]) return image ;
        dfs(image ,sr , sc , image[sr][sc],color);
        return image ;
        }
};