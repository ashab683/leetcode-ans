class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            int runningSum = nums[i] + sum;
            nums[i] = runningSum;
            sum = runningSum;
        }
        return nums;
    }
};