#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

vector<ll> dp(100001, LLONG_MAX);

void Solve()
{
    int n, k;
    cin >> n >> k;
    int h[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> h[i];
    // dp[i] = 1 থেকে i তে আসতে খরচ
    dp[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        for (int j = i - 1; j >= i - k; j--)
        { // j = i-1, i-2, i-3, ..., i-k
            if (j <= 0)
                break;
            // 1 to i = (1 to j) + (j to i) // j = middleman
            ll cost = dp[j] + abs(h[i] - h[j]);
            dp[i] = min(cost, dp[i]);
        }
    }
    cout << dp[n] << '\n';
    // O(n * k)
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
    {
        Solve();
    }
    return 0;
}
// Coded by Tahsin Arafat (@TahsinArafat)
// Coded for CPS Academy
