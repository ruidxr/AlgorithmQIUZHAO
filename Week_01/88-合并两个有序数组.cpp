class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len=m+n-1;
        while(m && n){
            if(nums1[m-1]>nums2[n-1]){
                nums1[len]=nums1[m-1];
                m--;
            }
            else{
                nums1[len]=nums2[n-1];
                n--;
            }
            len--;
        }
        while(m){
            nums1[len]=nums1[m-1];
            m--;
            len--;
        }
        while(n){
            nums1[len]=nums2[n-1];
            n--;
            len--;
        }
    }
};