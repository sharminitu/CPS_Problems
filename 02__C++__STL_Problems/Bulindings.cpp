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

    int seraja = 0;
    int dima = 0;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int ans = -1;
    for(int i=1;i<=n;i++){
        if(a[1]<a[i]){
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;

    

}
int main()
{
    optimize();

    ans();
}
