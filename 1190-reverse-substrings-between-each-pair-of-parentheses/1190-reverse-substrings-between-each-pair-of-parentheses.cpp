class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> f;
        string ans;

        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                f.push(ans.size());
            }
            else if(s[i]==')'){
                int pos=f.top();
                f.pop();

                reverse(ans.begin()+pos,ans.end());
            }
            else{
                ans+=s[i];
            }
        }

        return ans;
    }
};