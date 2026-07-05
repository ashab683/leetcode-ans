class Solution {
public:
    string removeDuplicates(string s) {
        while(true){
            bool removed = false;
            for(int i = 0;i<s.length();i++){
                if(s[i]==s[i+1]){
                    s.erase(i,2);
                    removed = true;
                    break;
                }
            }
            if(!removed)
            break;

        }
      return s;
    }
};