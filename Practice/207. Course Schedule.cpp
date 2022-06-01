//dfs solution
class Solution {
private:
    bool isCycle(vector<int> adj[], vector<int> &vis, int id){
        if(vis[id] == 1) return true;

        if(vis[id] == 0){
            vis[id] = 1;
            for(auto edge : adj[id]){
                if(isCycle(adj,vis,edge))
                    return true;
            }
        }
        vis[id] = 2;
        return false;
    }
    
public:
    bool canFinish(int numCourses, vector<vector<int>>& pre) {
        vector<int> adj[numCourses];
        for(auto edge : pre)
            adj[edge[1]].push_back(edge[0]);
        
        vector<int> vis (numCourses,0);
        
        for(int i=0; i<numCourses; i++){
            if(isCycle(adj, vis, i))
                return false;
        }
        return true;
    }
};