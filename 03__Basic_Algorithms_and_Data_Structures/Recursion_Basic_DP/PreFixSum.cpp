#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void ans(){
    int n;
    cin>>n;

    vector<ll>v(n+1),pre(n+1);

    for(int i=1;i<=n;i++){
        cin>>v[i];
    }

    for (int i = 1; i <= n; i++)
    {
       pre[i] = pre[i-1] +v[i];
    }

    for (int i = 1; i <= n; i++)
    {
        cout<<pre[i]<<" ";
    }

    int q;
    cin>>q;

    while(q--){
        int l,r;
        cin>>l>>r;

        int ans = pre[r] +pre[l-1];
        cout << ans << endl;
    }
    
   
}
int main()
{
    optimize();
    ans();

    return 0;
}
