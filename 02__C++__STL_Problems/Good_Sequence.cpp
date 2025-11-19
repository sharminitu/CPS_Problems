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

    vector<int> v(n);

    vector<int>c(n+1);
    int ans =0;
    int c1=0;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        if(v[i]>n){
            ans++;
        }
        else{
        c[v[i]]++;
        }
    }

    for (int i = 1; i <=n; i++)
    {
        if(c[i]>=i){
           ans+=c[i] -i;
        }
        else{
            ans+=c[i];
        }
    }
    cout<<ans<<endl;
}
int main()
{
    optimize();
    
    ans();

    return 0;
}
