#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void ans()
{
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
  
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int mxA = *max_element(a.begin(),a.end());
    int mxB = *max_element(b.begin(), b.end());
    cout << (mxA + mxB) << endl;
}
int main()
{
    optimize();
    ans();

    return 0;
}
