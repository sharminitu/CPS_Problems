#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void ans()
{
    string s;
    cin >> s;

    s = s.substr(0,s.size()/2);

    int m = unique(s.begin(),s.end())-s.begin();

    if(m==1){
        cout<<"No"<<endl;
    }
    else{
        cout<<"YES"<<endl;
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
