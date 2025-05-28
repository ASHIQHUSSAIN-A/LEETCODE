class Solution {
public:
    int smallestIndex(vector<int>& nums) {
    for(int i=0;i<nums.size();i++){
        int res=0;
        while(nums[i]!=0){
        res+=nums[i]%10;
        nums[i]/=10;
        }
        if(res==i)  
        return i;
    }
    return -1;    
    }
};