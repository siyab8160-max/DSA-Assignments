#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    vector<int> dp(n);
    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);
    for (int i = 2; i < n; i++)
    {
        dp[i] = dp[i - 1] + abs(h[i] - h[i - 1]);
        for (int j = i - 2; j >= 0 && j >= i - k; j--)
        {
            dp[i] = min(dp[i], (dp[j] + abs(h[i] - h[j])));
        }
    }
    cout << dp[n - 1] << endl;
}