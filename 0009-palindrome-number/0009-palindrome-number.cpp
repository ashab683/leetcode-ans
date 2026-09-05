class Solution {
public:
    bool isPalindrome(int x) {
        long long revNum = 0;
        int dup = x;
        
        while(x>0){
            
          int lastdig = x%10;
            revNum = (revNum*10) + lastdig;
               x = x/10;
        }
        if(revNum == dup){
            return true;
        }
        else{
            return false;
        }
        
    }
};