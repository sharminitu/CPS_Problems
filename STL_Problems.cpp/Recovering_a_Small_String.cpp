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
    cin>>n;
    string s = "aaa";

    n-=3;

    int temp = min(25,n);
    s[2] +=temp;
    n-=temp;
     temp = min(25, n);
    s[1] += temp;
    n-=temp;
     temp = min(25, n);
    s[0] += temp;
    n-=temp;

   cout<<s<<endl;
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
