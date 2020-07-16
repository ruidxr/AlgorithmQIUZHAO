class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());

        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int target=-nums[i];
            int j=i+1;
            int k=n-1;
            while(j<k){
                while(j>i+1 && nums[j]==nums[j-1] && j<n-1)
                    j++;
                if(j>=k)
                    break;
                if(nums[j]+nums[k]==target){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                }
                else if(nums[j]+nums[k]>target)
                    k--;
                else
                    j++;
            }
        }
        return ans;
    }
};