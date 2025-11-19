#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void ans()
{
    map<int,int>mp;
    long long n;
    cin >> n;
    vector<long long> a(n + 1);
    int maxCnt =0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        maxCnt = max(maxCnt,mp[a[i]]);
    }

    cout<<maxCnt<<endl;

}
int main()
{
    optimize();

    ans();
}
