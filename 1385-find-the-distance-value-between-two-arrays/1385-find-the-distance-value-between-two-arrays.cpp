class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());

        int ans = 0;
        int i = 0;

        for (int x : arr1) {
            while (i < arr2.size() && arr2[i]+d < x)
                i++;

            if (i == arr2.size() || arr2[i]-x > d )
                ans++;
        }

        return ans;
    }
};