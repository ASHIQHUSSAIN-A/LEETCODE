class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
    unordered_map<int,int>m;
    vector<int>v;
    for(auto i:nums){
        m[i]++;
    }
    for(auto j:m){
    if(j.second == 2){
        v.push_back(j.first);
    }
    }
       return v;
    }
};