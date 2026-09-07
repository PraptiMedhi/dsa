class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n=nums.size();
        long long total=0;

        for(int i=0;i<n;i++){
            total+=nums[i];
        }

        long long first=0;

        for(int i=0;i<n/2;i++){
            first+=nums[i];
        }

        int ans=0;

        for(int i=0;i<n;i++){
            if(first>total-first){
                ans++;
            }

            first=first+nums[(i+n/2)%n]-nums[i];
        }

        return ans;
    }
};