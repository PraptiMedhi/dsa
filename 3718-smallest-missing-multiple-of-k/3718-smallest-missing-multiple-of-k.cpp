class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
       vector<int>v(n+1,0);
       for(int i=0;i<n;i++){
             if(nums[i] % k == 0) {
                int x = nums[i] / k;

                if(x <= n) {
                    v[x] = 1;
        }
       }}
       for(int i=1;i<=n;i++){
        if(v[i]==0){
            return i*k;
            break;
        }
       }
       return (n+1)*k; 

    }
};