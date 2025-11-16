#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void ans()
{

    vector<string> list;
    map<string, bool> mp;
    string s;
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        list.push_back(s);
    }
    for (int i = 0; i < k; i++)
    {
        cin >> s;
        mp[s] = true;

    }

    int c = 0;
    for(auto x : list ){
        string last3digit = x.substr(3,3);

        if(mp[last3digit]==true){
            c++;
        }
    }

    cout<<c<<endl;
}
int main()
{
    optimize();
    ans();

    return 0;
}
