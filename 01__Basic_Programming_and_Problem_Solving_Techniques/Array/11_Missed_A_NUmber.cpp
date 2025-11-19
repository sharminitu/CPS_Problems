#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[4 * n - 1];

    vector<int> count(4 * n);
    for (int i = 1; i <=(n-1); i++)
    {
        cin >> a[i];
        count[a[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (count[i]==0)
        {
         cout<<i<<endl;
         break;
        }
    }
    return 0;
}