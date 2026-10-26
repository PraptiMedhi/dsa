class Solution {
public:
    int minimumCost(vector<int>& cost) {
        long long ans=0;
        sort(cost.rbegin(),cost.rend());

        for(int i=0;i<cost.size();i++){
            if((i+1)%3==0){
                continue;
            }
            ans+=cost[i];
        }
        return ans;
    }
};