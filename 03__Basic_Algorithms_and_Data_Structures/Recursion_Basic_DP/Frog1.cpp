#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

    vector<ll>PreCal(100001,-1);
ll minCost(ll i,ll n, ll arr[]){
    if(i==n)
        return 0;

    if(i==n-1)
        return abs(arr[i]-arr[i+1]) + minCost(i+1,n,arr);

        if(PreCal[i]!=-1)
            return PreCal[i];

    PreCal[i] = min(
        abs(arr[i] - arr[i+1]) + minCost(i + 1, n, arr),
        abs(arr[i] - arr[i+2]) + minCost(i + 2, n, arr));

        return PreCal[i];
}
void ans()
    {
        int  n;
        cin >> n;
        ll arr[n + 1];

        for (int  i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        cout << minCost(1, n, arr) << endl;
    }
int main()
{
    optimize();
    ans();

    return 0;
}
