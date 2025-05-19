class Solution {
public:
    int averageValue(vector<int>& nums) {
        int res=0;
        vector<int>v;
    for(int i=0;i<nums.size();i++){
        if(nums[i] % 2 == 0 && nums[i]%3 == 0){
        v.push_back(nums[i]);
        }
    }
    int n = v.size();
    int sum = accumulate(v.begin(), v.end(), 0);
    if(n==0)return 0;
    res=sum/n;
    return res;
    }
};