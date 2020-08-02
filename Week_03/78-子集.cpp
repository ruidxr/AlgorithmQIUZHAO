class Solution {
    vector<vector<int>> ans;
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        if(nums.size()==0)   return ans;
        vector<int> temp;
        _generate(nums,temp,0);
        return ans;
    }
    void _generate(vector<int> nums,vector<int> temp,int index){
        if(index==nums.size()){
            ans.push_back(temp);
            return;
        }
        _generate(nums,temp,index+1);
        temp.push_back(nums[index]);
        _generate(nums,temp,index+1);
    }
};