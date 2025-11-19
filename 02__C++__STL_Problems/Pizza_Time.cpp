
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void ans()
{
    long long n;
    cin>>n;

    long long ans = (n-1)/2;
    cout<<ans<<endl;
}
int main()
{
    optimize();

    int test;
    cin >> test;
    while (test--)
        ans();

    return 0;
}
