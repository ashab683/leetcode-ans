class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int i = 0;
      int unique = 1;
      int j = 1;
      while(j<nums.size()){
        if (nums.size() == 0) return 0;
        if(nums[j]==nums[j-1]){
            j++;
            continue;
        }
        else{
            nums[i+1]=nums[j];
            i++;
            unique++;
            j++;
        }
      }
      return unique;
    }
};