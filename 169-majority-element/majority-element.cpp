class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
    unordered_map<int,int>s;
    for(auto num:nums){
        s[num]++;
    }
    for(auto m:s){
    if(m.second > n/2){
        return m.first;
    }
    }
    return 0;    
    }
};