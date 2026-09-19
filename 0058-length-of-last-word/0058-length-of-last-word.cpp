class Solution {
public:
    int lengthOfLastWord(string s) {
        
        while(s[s.length()-1]==' '){
            s.pop_back();
        }
        int n=s.length();
        int count=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' '){
                count++;
            }
            else{
               break;
            }
        }
        return count;
    }
};