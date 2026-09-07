class Solution {
    private:
    int check(string s){
        int left=0;
        int right=1;
        int count=0;
        while(right<s.length()){
            if(s[left]==s[right]){
                count++;
            }
            left++;
            right++;
        }
       return count;
    }
public:
    int countRotations(string s, int k) {
        int n=s.length();
        int ans=0;
        for(int i=0;i<n;i++){
            string newi="";
            char first=s[0];
            for(int i=1;i<n;i++){
                newi+=s[i];
            }
            newi+=first;
            int count=check(newi);
            if(count==k){
            ans++;}
            s=newi;
        }
        return ans;
    }
};