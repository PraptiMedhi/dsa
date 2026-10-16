class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum=0;
        sort(capacity.rbegin(),capacity.rend());
        for(int i=0;i<apple.size();i++){
            sum+=apple[i];
        }
        int check=1;
        int sum2=capacity[0];
       
        for(int i=1;i<capacity.size();i++){
            if(sum2<sum){
                check++;
                sum2=sum2+capacity[i];
            }
             if(sum2>=sum){
                break;
            }
        }
        return check;
    }
};