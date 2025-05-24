class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n=nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        int res=0;
        if(nums[i]==nums[0]||nums[i]==nums[n-1]) continue;
        return res=nums[i];
    }
    return -1;    
    }
};