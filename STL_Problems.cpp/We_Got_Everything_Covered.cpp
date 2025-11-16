#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void ans()
{
    int n,k;

    cin>>n>>k;

    string s ="";
    for(int i=0;i<k;i++){
        s+=('a'+i);
    }

    for (int i = 0; i < n; i++)
    {
        cout<<s;
    }
    cout<<endl;
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
