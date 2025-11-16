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
    vector<vector<int>> ans;

    int x, y, z;

    for (x = 0; x <= n; x++)
    {
        for (y = 0; y <= n; y++)
        {
            for (z = 0; z <= n; z++)
            {
                if (x + y + z <= n)
                {

                    ans.push_back({x, y, z});
                }
            }
        }
    }

    sort(ans.begin(), ans.end());

    int m = ans.size();

    for (int i = 0; i < m; i++)
    {
        cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << endl;
    }
}
int main()
{
    optimize();
    ans();

    return 0;
}
