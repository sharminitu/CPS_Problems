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

    string s;
    cin>>s;

    transform(s.begin(),s.end(),s.begin(),::towlower);

    s.erase(unique(s.begin(),s.end()),s.end());

    if(s=="meow"){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main()
{
    optimize();

    int test;
    cin >> test;
    while (test--)
    {
        ans();
    }
}
