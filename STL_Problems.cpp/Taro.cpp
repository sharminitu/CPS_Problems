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
    cin >> n;

    vector<int>a(n);
    for (int i =0; i <n; i++)
    {
        cin>>a[i];
    }
   sort(a.begin(),a.end());

   int  ans =0;
   for(int i=0;i<n;i++){
        if(ans<a[i]){
            ans++;
        }
   }
   cout<<ans<<endl;



}
int main()
{
    optimize();

    ans();
}
