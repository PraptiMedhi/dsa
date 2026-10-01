class Solution {
public:
    int maxDepth(string s) {
        stack<int> st;
        int maxi=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(s[i]);
                maxi=max(maxi,(int)st.size());
            }
            if(s[i]==')'){
                st.pop();

            }
        }
        return maxi;
    }
};