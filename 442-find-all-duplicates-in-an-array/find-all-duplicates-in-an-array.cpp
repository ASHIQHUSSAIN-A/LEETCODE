class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    map<int,int>m;
    for(auto i:nums){
        m[i]++;
    }
    vector<int>v;
    for(auto j:m){
        if(j.second>1){
        v.push_back(j.first);
        }
    }
    return v;    
    }
};