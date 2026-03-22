class Solution {
public:
    
      vector<vector<int>> dp;

    int ss(string &s, int left, int right)
    {
        if(left>right) return 0;
        if(left == right) return dp[left][right]=1;

        if(dp[left][right]!=-1) return dp[left][right];

        if(s[left]==s[right]) return dp[left][right] =2+ ss(s,left+1,right-1);

        else
        {
            return dp[left][right]=max(ss(s,left+1,right), ss(s,left,right-1));
        }
    }

    int longestPalindromeSubseq(string s) {
            int n=s.size();
            dp.resize(n, vector<int>(n, -1));
            return ss(s,0,n-1);
        
    }
};
