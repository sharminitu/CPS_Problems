#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void ans()
{
    int n,b,d;
    cin >> n>>b>>d;
    vector<int>a;
    for(int i=0;i<n;i++){
      int x;
      cin>>x ;
      if(x<=b){
        a.push_back(x);
      }
    }

    n = a.size();
      
    int m=0,s=0;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
      if(s>d){
        s=0;
        m++;
      }
    
    }
cout << m << endl;
}
int main()
{
    optimize();
    ans();

    return 0;
}
