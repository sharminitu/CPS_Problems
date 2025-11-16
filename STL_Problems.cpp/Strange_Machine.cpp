#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void ans()
{
   int n,q;
   cin>>n>>q;

   string s;
   cin>>s;

   int a[n];
   for(int i=0;i<q;i++){
        cin>>a[i];
   }

   int ans;
   for (int i = 0; i < q; i++)
   {
       if(s[i]=='A'){
         ans = a[i]-1;
       }
       else if(s[i]=='B'){
         ans = floor(a[i]/2);
       }
   }
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
