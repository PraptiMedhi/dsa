class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int N=n;
        int product=1;
        while(N){
            int rem=N%10;
            sum+=rem;
            product*=rem;
            N=N/10;
        }
        if(n%(sum+product)==0){
            return true;
        }
        return false;
    }
};