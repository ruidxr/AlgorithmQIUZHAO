class Solution {
public:
    double myPow(double x, int n) {
        long long N=n;
        if(N==0)
            return 1;
        if(N<0){
            x=1/x;
            N=-N;
        }
        if(N==1)
            return x;
        double ans=1;
        while(N){
            if(N%2==1)
                ans*=x;
            x*=x;
            N/=2;
        }
        return ans;
    }
};

class Solution {
public:
    double fastPow(double x,long long n){
        if(n==0)
            return 1;
        double half=fastPow(x,n/2);
        return n%2==0?half*half:half*half*x;
    }
    double myPow(double x, int n) {
        long long N=n;
        if(N<0){
            x=1/x;
            N=-N;
        }
        return fastPow(x,N);
    }
};