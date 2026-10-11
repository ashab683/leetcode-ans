class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum = 0;
        int squar;
        for(int i =1;i<=nums.size();i++){
            if(nums.size()%i==0){
               squar= nums[i-1]*nums[i-1];
                sum = sum+squar;
            }
           
        }
        return sum;
    }
};