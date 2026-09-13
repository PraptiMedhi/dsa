class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        int q=queries.size();
        vector<string> ans;
        int d=dictionary.size();
        for(int i=0;i<q;i++){
            for(int j=0;j<d;j++){
                 int check=0;
                for(int k=0;k<dictionary[0].length();k++){
                    if(queries[i][k]!=dictionary[j][k]){
                        check++;
                    }
                }
                    if(check<=2){
                        ans.push_back(queries[i]);
                        break;
                    
                }
            }
        }
        return ans;

    }
};