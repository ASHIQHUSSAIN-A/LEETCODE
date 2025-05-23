class Solution {
public:
    int findFinalValue(vector<int>& nums, int o) {
        int i = 0;
        while (i < nums.size()) {
            if (nums[i] == o){
                o = o * 2;
            i = 0;
        }
            else {
                i++;
            }
        }
        return o;
    }
};