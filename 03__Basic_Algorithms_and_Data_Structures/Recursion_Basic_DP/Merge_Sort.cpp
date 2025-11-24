#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void merge(ll l, ll r, vector<ll> &arr)
{

    ll mid = (l + r) / 2;

    vector<ll> tempL, tempR;

    for (int i = l; i <= mid; i++)
    {
        tempL.push_back(arr[i]);
    }

    for (int i = mid + 1; i <= r; i++)
    {
        tempR.push_back(arr[i]);
    }

    ll currentIndext = l;

    ll L = 0, R = 0;

    while (L < tempL.size() && R < tempR.size())
    {
        if (tempL[L] < tempR[R])
        {
            arr[currentIndext] = tempL[L];
             currentIndext++;
              L++;
        }
        else
        {

            arr[currentIndext] = tempR[R];
             currentIndext++;
              R++;
        }
    }

    while (L < tempL.size())
    {
        arr[currentIndext] = tempL[L];
        currentIndext++;
        L++;
    }

    while (R < tempR.size())
    {
        arr[currentIndext] = tempR[R];
        currentIndext++;
        R++;
    }
}
void divide(ll l, ll r, vector<ll> &arr)
{
    if (l == r)
    {
        return;
    }

    ll mid = (l + r) / 2;
    divide(l, mid, arr);
    divide(mid + 1, r, arr);
    merge(l, r, arr);
}
void ans()
{

    int n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    divide(0, a.size() - 1, a);

    for (auto s : a)
    {
        cout << s << " ";
    }
    cout << endl;
}
int main()
{
    optimize();
    ans();

    return 0;
}
