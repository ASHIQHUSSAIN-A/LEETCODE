class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        vector<int>v;
        
    for(int i=0;i<a.size();i++){
        int res1=0;
        for(int j=0;j<a[i].size();j++){
            res1+=a[i][j];
            v.push_back(res1);
        }
    }   
    return *max_element(v.begin(),v.end()); 
    }
};