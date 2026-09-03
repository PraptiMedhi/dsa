class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minieven=INT_MAX;
        int n=nums1.size();
        int miniodd=INT_MAX;
        int odd=0;
        int even=0;
        for(int i=0;i<n;i++){
            if(nums1[i]&1){
                miniodd=min(miniodd,nums1[i]);
                odd++;
            }
            else{
                minieven=min(minieven,nums1[i]);
                even++;
            }
        }
        if(even==n  || odd==n){
            return true;
        }
        return minieven>miniodd;
    }
};