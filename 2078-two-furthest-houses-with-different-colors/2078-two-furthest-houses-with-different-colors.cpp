class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int left=1;
        int n=colors.size();
        for(int i=0;i<n;i++){
            if(colors[i]!=colors[0]){
                left=max(left,i);
            }
        }
    int right=0;
    for(int i=n-1;i>=0;i--){
            if(colors[i]!=colors[n-1]){
                right=max(right,n-1-i);
            }
    }
    return max(left ,right);
        }
};