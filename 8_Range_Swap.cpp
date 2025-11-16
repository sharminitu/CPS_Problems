#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,r,s;
    cin >> n>>p>>q>>r>>s;

    int a[100];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i =p ; i <= q; i++)
    {

        swap(a[i],a[r-p+i]);
    }

    for (int i =1 ; i <= n; i++)
    {
        cout<<a[i];

        if(i<n){
            cout<<" ";
        }
        else{
            cout<<endl;
        }
    }
   
    return 0;
}

