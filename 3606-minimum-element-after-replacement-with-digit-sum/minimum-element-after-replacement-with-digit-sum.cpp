class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int>res;
    for(int i=0;i<nums.size();i++){
          int s=0;
        int r=nums[i];
        while(r){
        s+=r%10;
        r/=10;
        }
        res.push_back(s);
    }
    sort(res.begin(),res.end());
    return res[0];   
    }
};