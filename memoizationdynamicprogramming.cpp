#include <iostream>
#include <vector>
using namespace std;

int fibMemo(int n, vector<int>& dp) {
    if (n <= 1) return n;
    if (dp[n] != -1) return dp[n];
    dp[n] = fibMemo(n - 1, dp) + fibMemo(n - 2, dp);
    return dp[n];
}

int main() {
    int n = 10;
    vector<int> dp(n + 1, -1);
    cout << "Fibonacci of (" << n << ") = " << fibMemo(n, dp) << endl;
    return 0;
}