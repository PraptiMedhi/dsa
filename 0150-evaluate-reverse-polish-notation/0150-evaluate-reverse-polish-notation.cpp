class Solution {
    private:
   int convert(string ch,int a,int b){
        if(ch=="+"){
              return a+b;
        }
        else if(ch=="-"){
            return a-b;
        }
        else if(ch=="*"){
            return a*b;
        }
        else{
            return a/b;
        }
    }
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;

        for(int i=0;i<tokens.size();i++){
           if(tokens[i] != "+" && tokens[i] != "-" &&
   tokens[i] != "*" && tokens[i] != "/"){
                s.push(stoi(tokens[i]));
            }
            else{
                int t1=s.top();
                s.pop();
                int t2=s.top();
                s.pop();
                s.push(convert(tokens[i],t2,t1));
            }
        }
        return s.top();
    }
};