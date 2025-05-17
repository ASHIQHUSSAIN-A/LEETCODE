class Solution {
public:
    void sortColors(vector<int>& nums) {
    int low = 0,mead = 0,high = nums.size()-1;
    while(mead <= high){
        if(nums[mead]==0){
            swap(nums[low],nums[mead]);
            low++;
            mead++;
        }
        else if(nums[mead]==1){
            mead++;
        }
        else{
            swap(nums[mead],nums[high]);
            high--;
        }
    }    
    }
};