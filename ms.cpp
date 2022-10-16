class Solution {
public:
    int MAX = 10;

    int ms(vector<int>& a, int n, int ind, int k, vector<vector<int>>& dp)
    {
        if (k == 0) {
            
            if (ind == n)
                return 0;
            else
                return 1e9;
        }
    
        else if (ind == n)
            return 1e9;
    
        else if (dp[ind][k] != -1)
            return dp[ind][k];
    
        else {
            int ans = 1e9;
            int mini = a[ind];
    
            for (int i = ind; i < n; i++) {
    
                mini = max(mini, a[i]);

                ans = min(ans, ms(a, n, i + 1, k - 1, dp) + mini);
            }

            return dp[ind][k] = ans;
        }
    }
    int minDifficulty(vector<int>& jd, int d) 
    {
        if(jd.size()<d) return -1;
        vector<vector<int>> dp(jd.size()+1, vector<int>(jd.size()+1, -1));
        return ms(jd, jd.size(), 0, d, dp);
        
        
        return d;
    }
};
