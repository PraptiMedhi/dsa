class Solution {
public:
    long long sumAndMultiply(int n) {
    long long x=0;
    long long N=n;
    while(n)
    {
            x+=n%10;
            n=n/10;
    }
    cout<<x<<endl;
    long long  mul=0;
    while(N){
        int rem=N%10;
        if(rem!=0){
            mul=mul*10+rem;
        }
        N=N/10  ;
    }
    string s=to_string(mul);
    reverse(s.begin(),s.end());
    mul=stoi(s);
    cout<<mul<<endl;
    return x*mul;
    }
};