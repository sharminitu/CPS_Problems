#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

vector<ll> Dp(100001, -1);

void ans()
{
    int n;
    cin >> n;
    ll arr[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    Dp[1] = 0;                    // kono khoroch hoini tai 0
    Dp[2] = abs(arr[1] - arr[2]); // 1 theke 2 a jump korte

    for (int i = 3; i <= n; i++)
    {
        // i-1 theke asbo

        ll cost1 = abs(arr[i] - arr[i - 1]) + Dp[i - 1];
        // i-2 theke asbo
        ll cost2 = abs(arr[i] - arr[i - 2]) + Dp[i - 2];

        Dp[i] = min(cost1, cost2);
    }
    cout << Dp[n];
}
int main()
{
    optimize();
    ans();

    return 0;
}
