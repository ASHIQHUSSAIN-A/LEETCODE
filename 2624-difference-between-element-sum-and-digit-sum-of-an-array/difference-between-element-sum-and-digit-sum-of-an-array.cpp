class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
    int digitsum=0;
    int res=0;
    for(int i=0;i<nums.size();i++){
        res+=nums[i];
        int n = nums[i];
         while(n>0){
        digitsum+= n%10;
        n/=10;
        }
    }
    return abs(res-digitsum);    
    }
};