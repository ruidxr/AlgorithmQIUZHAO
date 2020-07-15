// 超时
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int temp;
        for(int i=0;i<k;i++){
            temp=nums[nums.size()-1];
            for(int j=nums.size()-1;j>0;j--){
                nums[j]=nums[j-1];
            }
            nums[0]=temp;
        }
    }
};

// 通过
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k%nums.size());
        reverse(nums.begin()+k%nums.size(),nums.end());
    }
};