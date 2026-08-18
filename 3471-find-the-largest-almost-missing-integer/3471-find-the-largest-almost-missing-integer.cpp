class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();

        // Only one subarray: the whole array
        if (n == k) {
            return *max_element(nums.begin(), nums.end());
        }

        // Every element forms its own subarray
        if (k == 1) {
            unordered_map<int, int> freq;

            for (int x : nums) {
                freq[x]++;
            }

            int ans = -1;

            for (int x : nums) {
                if (freq[x] == 1) {
                    ans = max(ans, x);
                }
            }

            return ans;
        }

        int count1 = 0;
        int count2 = 0;

        // Count occurrences of first and last element
        for (int i = 0; i < n; i++) {
            if (nums[0] == nums[i]) {
                count1++;
            }

            if (nums[n - 1] == nums[i]) {
                count2++;
            }
        }

        if (count1 == 1 && count2 == 1) {
            return max(nums[0], nums[n - 1]);
        }
        else if (count2 == 1) {
            return nums[n - 1];
        }
        else if (count1 == 1) {
            return nums[0];
        }
        else {
            return -1;
        }
    }
};