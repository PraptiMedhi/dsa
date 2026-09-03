class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
       if(nums.size()<=2){
        return nums.size();
       }
       else{
        return  1<<bit_width(nums.size());
       }
    }
};