/*
Given an integer n, return the least number of perfect square numbers that sum to n.

A perfect square is an integer that is the square of an integer; in other words, it is the product of some integer with itself. For example, 1, 4, 9, and 16 are perfect squares while 3 and 11 are not.

*/

int numSquares(int n){
    int dp[n+1];
    dp[0] = 0; 
    for (int i = 1; i <= n; i++) {
        dp[i] = INT_MAX;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j * j <= i; j++) {
            dp[i] = fmin(dp[i], dp[i - j * j] + 1);
        }
    }
    return dp[n];
}
