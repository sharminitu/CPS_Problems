#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

 
void ans()
{

    while(1){
        map<string, int> mp;
        int n;
        cin >> n;
        if (n == 0)
        {
            break;
        }
    string s;
    for(int i=0;i<n;i++){
    cin >> s;
    mp[s]++;
    }

    int maxcnt =0;
    string ans ="";

    for(auto x : mp){
        if(x.second>maxcnt){
            maxcnt = x.second;
            ans = x.first;
        }
    }
    cout<<ans<<endl;
}
    
}
int main()
{
    optimize();
    ans();
}
