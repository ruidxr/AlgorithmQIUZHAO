class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int length = height.size();
        int i = 0, j = length -1, max = 0;
        while (i < j)
        {
            int temp = (j-i)*min(height[i],height[j]);
            if (temp > max) max = temp;
            if (height[i] < height[j]) 
                i++;
            else
                j--;
        }
        return max;
        
    }
};