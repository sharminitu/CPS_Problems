#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void ans()
{
    map<string, int> mp;
    int n;
    cin >> n;

    if (n == 1)
    {
        string s;
        int t;
        cin>>s>>t;
        mp[s] +=t;
        
   }
   else if(n==2){
    string s;
    cin>>s;
    mp.erase(s);
   }

   else
   {
       string s;
       cin >> s;
       cout<<mp[s]<<endl;
   }

   
}
int main()
{
    optimize();

   
    int test;
    cin>>test;
    while(test--)
    ans();
}
