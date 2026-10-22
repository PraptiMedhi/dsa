class Solution {
public:
    int minOperations(vector<int>& nums) {
         int n = nums.size();
        bool inc = true, dec = true;

        for (int i = 0; i < n; i++) {
            if (nums[(i + 1) % n] != (nums[i] + 1) % n)
                inc = false;

            if (nums[(i + 1) % n] != (nums[i] - 1 + n) % n)
                dec = false;
        }

        if (inc) {
            if (nums[0] == 0)
                return 0;

            return min(n - nums[0], nums[0] + 2);
        }

        if (dec) {
            return 1 + min(nums[n - 1], n - nums[n - 1]);
        }

        return -1;
    }
};