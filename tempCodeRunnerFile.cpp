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


    sort(a.rbegin(),a.rend());

    int s =0;
    for (int i = 0; i < n-1; i++)
    {
        s+=a[i];
    }

   if(s==m){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
}
int main()
{
    optimize();
    ans();
}
