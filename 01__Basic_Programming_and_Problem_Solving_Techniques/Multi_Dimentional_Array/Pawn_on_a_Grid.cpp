#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void ans()
{

   
    int n, m;
    cin >> n >> m;

    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
int c=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(s[i][j]=='#'){
                c++;
            }
        }
    }

    cout<<c<<endl;
}
int main()
{
    optimize();
    ans();

    return 0;
}

//https: // atcoder.jp/contests/abc280/tasks/abc280_a