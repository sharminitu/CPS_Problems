#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, k;
    cin >> n >> k;
    int a[n];
    bool f=0;


    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n-1; i++)
    {
       if(a[i+1]-a[i]<=k){
        f=1;
        cout<<a[i+1]<<endl;
        break;
       }
       
    }
    if(!f){
        cout<<-1<<endl;
    }

    return 0;
}