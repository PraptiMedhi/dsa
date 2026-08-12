class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> elementCountMap;
        
        for(int i = 0; i < nums.size(); i++) {
            elementCountMap[nums[i]]++;
        }
        
        vector<int> majorityElements;
        int threshold = nums.size() / 3;
        
        
        for(auto x: elementCountMap) {
            if(x.second > threshold) {
                majorityElements.push_back(x.first);            }
        }
        
        return majorityElements; 
    }
};