#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void ans()
{
    int n,m;
    cin>>n>>m;

    vector<string>list;
    map<string ,bool>mp;
    string s;

    for(int i=0;i<n;i++){
        cin>>s;
        list.push_back(s);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> s;
       mp[s] =true;
    }

    for(auto x :list){
        if(mp[x]){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}
int main()
{
    optimize();

    ans();

    return 0;
}
