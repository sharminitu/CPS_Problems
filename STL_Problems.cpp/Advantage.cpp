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

    vector<int>a(n),v(n);

    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    v = a;
    sort(v.rbegin(), v.rend());

  int mx =v[0];
  int mx2 =v[1];
   
    for (int i = 0; i < n; i++)
    { 
        if(a[i]==mx){
            cout<<(a[i] - mx2)<<" ";
        }
        else{
            cout<<(a[i] - mx)<<" ";
        }
}

cout<<endl;
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
