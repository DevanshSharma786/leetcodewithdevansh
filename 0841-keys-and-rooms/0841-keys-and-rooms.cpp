class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_set<int> visited ;
        queue<int> qu ;
        qu.push(0);
        visited.insert(0);
        while(!qu.empty()){
            int curr = qu.front();
            qu.pop() ;
            for(int neighbor : rooms[curr]){
                if(visited.count(neighbor)==0){
                    qu.push(neighbor) ;
                    visited.insert(neighbor) ;
                }
            }
        }
        return visited.size() == rooms.size();
    }
};