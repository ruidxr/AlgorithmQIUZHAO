class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> res(n);
        int d2=0,d3=0,d5=0;
        int temp;
        res[0]=1;

        for(int i=1;i<n;i++){
            temp=min(res[d2]*2,res[d3]*3);
            res[i]=min(temp,res[d5]*5);
            if(res[i]==res[d2]*2)   d2++;
            if(res[i]==res[d3]*3)   d3++;
            if(res[i]==res[d5]*5)   d5++;
        }
        return res[n-1];
    }
};