class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int  zero=0;
        int xori=nums[0];
        if(nums[0]==0){
            zero++;
        }
        for(int i=1;i<nums.size();i++){
            xori^=nums[i];
            if(nums[i]==0){
                zero++;
            }
        }
        if(zero==nums.size()){
            return 0;
        }
        if(xori>0){
            return nums.size();
        }
        else {
            return nums.size()-1;
        }
    }
};