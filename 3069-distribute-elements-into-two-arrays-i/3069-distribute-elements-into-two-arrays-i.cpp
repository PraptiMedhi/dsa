class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> v1, v2;
        v1 = {nums[0]};
        v2 = {nums[1]};
        for(int i = 2;i<nums.size();i++){
            if(v1.back() > v2.back()){
                v1.push_back(nums[i]);
            }else{
                v2.push_back(nums[i]);
            }
        }
        for(auto it : v2){
            v1.push_back(it);
        }
        return v1;
    }
};