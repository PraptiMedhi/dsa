class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                nums[i]=-nums[i];
            }
        }
        sort(nums.begin(),nums.end());
        long long r=nums.size()-1 ;   
        long long l=0;
        long long sumr=0;
        long long suml=0;
        while(l<r){
            sumr+=nums[r]*nums[r];
            r--;
            suml+=nums[l]*nums[l];
            l++;
        }
        if(nums.size()&1)
        return sumr-suml+(nums[l]*nums[l]);
        else return sumr-suml;
    }
};