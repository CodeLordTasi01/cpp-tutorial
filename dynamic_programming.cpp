#include<iostream>
using namespace std;
int fact(int n);
int main(){
    int n=5;
    cout<<fact(n);
    return 0;
}
int fact(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n*fact(n-1);
}





//1. DP on fibonacci
int fib(int n) {
    if (n <= 1) return n;
    vector<int> dp(n+1);
    dp[0] = 0, dp[1] = 1;
    for (int i = 2; i <= n; ++i)
        dp[i] = dp[i-1] + dp[i-2];
    return dp[n];
}

//optimize version this question
int fib(int n) {
    if (n <= 1) return n;
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}






//2. DP on kadane's
int maxSubArray(vector<int>& nums) {
    int maxSum = nums[0], currSum = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
        currSum = max(nums[i], currSum + nums[i]);
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}







//3. DP on LCS
int lcs(string s1, string s2) {
    int n = s1.size(), m = s2.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (s1[i-1] == s2[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[n][m];
}







//4. DP on LIS
int lengthOfLIS(vector<int>& nums) {
    int n = nums.size(), lis = 1;
    vector<int> dp(n, 1);
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (nums[j] < nums[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        lis = max(lis, dp[i]);
    }
    return lis;
}







//5. DP on Palindromic Subsequence
int longestPalindromeSubseq(string s) {
    int n = s.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i) dp[i][i] = 1;
    for (int len = 2; len <= n; ++len) {
        for (int i = 0; i <= n - len; ++i) {
            int j = i + len - 1;
            if (s[i] == s[j])
                dp[i][j] = 2 + (len == 2 ? 0 : dp[i+1][j-1]);
            else
                dp[i][j] = max(dp[i+1][j], dp[i][j-1]);
        }
    }
    return dp[0][n-1];
}







//6. DP on Edit Distance
int minDistance(string word1, string word2) {
    int m = word1.size(), n = word2.size();
    vector<vector<int>> dp(m+1, vector<int>(n+1, 0));

    for (int i = 0; i <= m; ++i) dp[i][0] = i;
    for (int j = 0; j <= n; ++j) dp[0][j] = j;

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (word1[i-1] == word2[j-1])
                dp[i][j] = dp[i-1][j-1];
            else
                dp[i][j] = 1 + min({dp[i-1][j-1], dp[i][j-1], dp[i-1][j]});
        }
    }
    return dp[m][n];
}







//7. DP on String Partition
bool isPalindrome(string& s, int i, int j) {
    while (i < j) {
        if (s[i++] != s[j--]) return false;
    }
    return true;
}
int minCut(string s) {
    int n = s.size();
    vector<int> dp(n+1, 0);
    for (int i = 0; i < n; ++i) dp[i] = i;
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (isPalindrome(s, j, i))
                dp[i] = (j == 0) ? 0 : min(dp[i], dp[j-1] + 1);
        }
    }
    return dp[n-1];
}







//8. DP on 0/1 Knapsack
int knapsack(int W, vector<int>& wt, vector<int>& val, int n) {
    vector<vector<int>> dp(n+1, vector<int>(W+1, 0));
    for (int i = 1; i <= n; ++i) {
        for (int w = 0; w <= W; ++w) {
            if (wt[i-1] <= w)
                dp[i][w] = max(dp[i-1][w], val[i-1] + dp[i-1][w - wt[i-1]]);
            else
                dp[i][w] = dp[i-1][w];
        }
    }
    return dp[n][W];
}







//9. DP on Unbounded Knapsack
int unboundedKnapsack(int W, vector<int>& wt, vector<int>& val, int n) {
    vector<int> dp(W+1, 0);
    for (int i = 0; i < n; ++i) {
        for (int w = wt[i]; w <= W; ++w) {
            dp[w] = max(dp[w], val[i] + dp[w - wt[i]]);
        }
    }
    return dp[W];
}







//10. DP on Subset Sum
bool isSubsetSum(vector<int>& arr, int target) {
    int n = arr.size();
    vector<vector<bool>> dp(n+1, vector<bool>(target+1, false));
    for (int i = 0; i <= n; ++i) dp[i][0] = true;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= target; ++j) {
            if (arr[i-1] <= j)
                dp[i][j] = dp[i-1][j] || dp[i-1][j - arr[i-1]];
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][target];
}







//11. DP on Catalan
int catalan(int n) {
    vector<long long> dp(n+1, 0);
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= n; ++i) {
        for (int j = 0; j < i; ++j)
            dp[i] += dp[j] * dp[i-j-1];
    }
    return dp[n];
}







//12. DP on Matrix Chain
int matrixChainOrder(vector<int>& dims) {
    int n = dims.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for (int len = 2; len < n; ++len) {
        for (int i = 1; i < n - len + 1; ++i) {
            int j = i + len - 1;
            dp[i][j] = INT_MAX;
            for (int k = i; k < j; ++k) {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + dims[i-1]*dims[k]*dims[j]);
            }
        }
    }
    return dp[1][n-1];
}







//13. DP on Counting Ways
int climbStairs(int n) {
    if (n <= 1) return 1;
    vector<int> dp(n+1);
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= n; ++i)
        dp[i] = dp[i-1] + dp[i-2];
    return dp[n];
}







//14. DP on Grids
int uniquePaths(int m, int n) {
    vector<vector<int>> dp(m, vector<int>(n, 1));
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    return dp[m-1][n-1];
}







//15. DP on Probability
int numRollsToTarget(int n, int k, int target) {
    const int MOD = 1e9+7;
    vector<vector<int>> dp(n+1, vector<int>(target+1, 0));
    dp[0][0] = 1;
    for (int dice = 1; dice <= n; ++dice) {
        for (int t = 1; t <= target; ++t) {
            for (int face = 1; face <= k && face <= t; ++face)
                dp[dice][t] = (dp[dice][t] + dp[dice-1][t-face]) % MOD;
        }
    }
    return dp[n][target];
}







//16. DP on Graphs
void dagShortestPath(int V, vector<vector<pair<int,int>>>& adj, int src) {
    vector<int> topo; // topological sort
    vector<int> dist(V, INT_MAX);
    dist[src] = 0;
    // After topological sorting
    for (int u : topo) {
        if (dist[u] != INT_MAX) {
            for (auto [v, w] : adj[u]) {
                dist[v] = min(dist[v], dist[u] + w);
            }
        }
    }
}








//17. DP on Digits
int dp[20][2];
int solve(string& s, int pos, bool tight) {
    if (pos == s.size()) return 1;
    if (dp[pos][tight] != -1) return dp[pos][tight];
    int limit = tight ? s[pos] - '0' : 9;
    int ans = 0;
    for (int d = 0; d <= limit; ++d) {
        ans += solve(s, pos+1, tight & (d == limit));
    }
    return dp[pos][tight] = ans;
}







//18. DP on Trees
int dfs(int node, int parent, vector<vector<int>>& tree, vector<int>& dp) {
    int sum = 0;
    for (int child : tree[node]) {
        if (child != parent) {
            sum += dfs(child, node, tree, dp);
        }
    }
    return dp[node] = sum + 1; // or any custom aggregation
}







//19. DP on Bitmasking
int tsp(int mask, int pos, vector<vector<int>>& dist, vector<vector<int>>& dp) {
    if (mask == (1<<dist.size()) - 1) return dist[pos][0];
    if (dp[mask][pos] != -1) return dp[mask][pos];
    int ans = INT_MAX;
    for (int city = 0; city < dist.size(); ++city) {
        if ((mask & (1<<city)) == 0) {
            ans = min(ans, dist[pos][city] + tsp(mask | (1<<city), city, dist, dp));
        }
    }
    return dp[mask][pos] = ans;
}







//20. DP on State Machine
int maxProfit(vector<int>& prices) {
    int n = prices.size();
    vector<vector<int>> dp(n, vector<int>(2, 0));
    dp[0][0] = 0; // not holding
    dp[0][1] = -prices[0]; // holding
    for (int i = 1; i < n; ++i) {
        dp[i][0] = max(dp[i-1][0], dp[i-1][1] + prices[i]);
        dp[i][1] = max(dp[i-1][1], dp[i-1][0] - prices[i]);
    }
    return dp[n-1][0];
}