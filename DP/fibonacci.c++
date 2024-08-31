#include <bits/stdc++.h>
using namespace std;

int N = 1000;
vector<int> dp(N, 0);

int solution1(int n)
{
    //memoization (top down approach)
    if (n == 1 || n == 0)
        return n;

    if (dp[n] != 0)
    {
        return dp[n];
    }
    return dp[n] = solution1(n - 1) + solution1(n - 2);
}

int solution2(int n){
    //tabulation (bottom up approach)
    if (n == 1 || n == 0)
        return n;
    
    dp[0] = 0;
    dp[1] = 1;

    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
//for all the problems it may not be possible to find both the top down and bottom up solutions


int solution3(int n){
    //improvement from above o(1) space complexity
    //this method may not be applicable for all problems
    if (n == 1 || n == 0)
        return n;

    int a = 0;
    int b = 1;
    int sum = 0;
    for(int i=2;i<=n;i++){
        sum = a + b;
        a = b;
        b = sum;
    }
    return sum;
}

int main()
{
    dp[1] = 1;

    cout << solution3(10) << endl;
    return 0;
}