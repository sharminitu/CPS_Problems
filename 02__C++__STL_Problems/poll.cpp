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
    long long n;
    cin >> n;
    
    string s;
    int mxcnt = 0;
    for (int i = 1; i <= n; i++)
    {
        cin>>s;
        mp[s]++;
        mxcnt = max(mp[s],mxcnt);

    }

    for(auto x : mp){
        if(x.second==mxcnt ){
             cout<<x.first<<endl;
        }
    }
    
}
int main()
{
    optimize();

    ans();
}
