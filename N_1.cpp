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

    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
       cin>>a[i];
    }


    int s =0;
    for (int i = 0; i < n; i++)
    {
        s+=a[i];
    }
    for (int i = 0; i < n; i++)
    {
       if(( s - a[i])==m){
            cout<<"Yes"<<endl;
            return;
       }
    }
    cout<<"No"<<endl;
}
int main()
{
    optimize();
    ans();
}
