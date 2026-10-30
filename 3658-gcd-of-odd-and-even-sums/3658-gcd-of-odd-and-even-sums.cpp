class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int  sumodd=0;
        int sumeven=0;
        for(int i=1;i<=2*n;i++){
            if(i&1){
                sumodd+=i;
            }
            else{
                sumeven+=i;
            }
        }
        return __gcd(sumeven,sumodd);
    }
};