class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
    unordered_map<int,int>m;
    unordered_set<int>n;
    for(auto a:arr){
        m[a]++;
    }
    for(auto r:m){
        if(n.count(r.second)){
            return false;
        }
        n.insert(r.second);
    }
    return true;    
    }
};