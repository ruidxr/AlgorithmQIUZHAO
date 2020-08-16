class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        int max_pow=1<<31;
        return max_pow%n==0;
    }
};