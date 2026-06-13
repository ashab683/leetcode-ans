class Solution {
public:
    int mySqrt(int x) {
        int s = 0;
        int e = x;
        int ans = 0;

        while(s<=e){
              int mid = s + (e - s) / 2;
            long long square = 1LL * mid * mid;
         if(square==x){
                return mid;
            }
            else if(square>x){
           
                e = mid-1;
            }
            else{
                ans = mid;
                s = mid + 1;
            }
        }
        return ans;
    }
    
};