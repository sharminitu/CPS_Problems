#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void ans()
{
    int n,k;
    cin >> n>>k;
    
    string s;
    vector<string>v;
    for(int i=0;i<n;i++){
        cin>>s;
        if(i<k){
        v.push_back(s);
        }
    }

    sort(v.begin(),v.end());
    
    for(int i =0;i<k;i++){
        cout<<v[i]<<endl;
    }

    
}
int main()
{
    optimize();
        ans();

    return 0;
}
