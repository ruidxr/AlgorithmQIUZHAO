class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int width=obstacleGrid[0].size();
        vector<int> dp(width,0);
        dp[0]=1;
        for(int i=0;i<obstacleGrid.size();i++){
            for(int j=0;j<width;j++){
                if(obstacleGrid[i][j]==1)
                    dp[j]=0;
                else if(j>0)
                    dp[j]+=dp[j-1];
            }
        }
        return dp[width-1];
    }
};