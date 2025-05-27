class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
    int f1=edges[0][0];
    int e1=edges[0][1];
    int f2=edges[1][0];
    int e2=edges[1][1];
    if(f1==f2 || f1==e2) return f1;
    return e1;    
    }
};