class Solution {
public:
    int minDistance(string word1, string word2) {
      int lw1 = word1.size(); int lw2 = word2.size();
      int dp[lw1+1][lw2+1];
      dp[0][0] = 0;
      for(int i=1;i<=lw1;i++)dp[i][0] = i;
      for(int i=1;i<=lw2;i++)dp[0][i] = i;

      for(int i=1;i<=lw1;i++){
        for(int j=1;j<=lw2;j++){
          if(word1[i-1] == word2[j-1]){
              dp[i][j] = dp[i-1][j-1];
          }else{
              dp[i][j] = 1 + min(min(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1]);
          }
        }
      } 
        return dp[lw1][lw2];
    }
};
