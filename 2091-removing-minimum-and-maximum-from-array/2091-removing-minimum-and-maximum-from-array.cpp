class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int maxi = max_element(nums.begin(), nums.end()) - nums.begin();
        int mini = min_element(nums.begin(), nums.end()) - nums.begin();

        int l = min(maxi, mini);
        int r = max(maxi, mini);

        return min({r + 1, n - l, l + 1 + n - r});
    }
};