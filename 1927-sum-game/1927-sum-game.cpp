class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();

        int lsum = 0, rsum = 0;
        int leftq = 0, rightq = 0;

        for (int i = 0; i < n / 2; i++) {
            if (num[i] == '?')
                leftq++;
            else
                lsum += num[i] - '0';
        }

        for (int i = n / 2; i < n; i++) {
            if (num[i] == '?')
                rightq++;
            else
                rsum += num[i] - '0';
        }
        return (lsum - rsum) * 2 != (rightq - leftq) * 9;
    }
};