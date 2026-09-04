class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        long long mod=1e9+7;
        for (int i=0;i<queries.size();i++){
            int li=queries[i][0];
            int ri=queries[i][1];
            int ki=queries[i][2];
            int vi=queries[i][3];
            for(int j=li;j<=ri;j=j+ki){
                nums[j]=(1LL *nums[j]*vi)%mod;
            }
        }
        long long xori=nums[0];
        for(int i=1;i<nums.size();i++){
            xori=xori^nums[i];
        }
        return xori;
    }
};