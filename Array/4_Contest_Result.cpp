#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, k;
    cin >> n >> k;
    int a[n];
    int b[k];
   
    for (int i = 1; i <=n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i <= k; i++)
    {
        cin >> b[i];
    }
    int s = 0;
    for (int i = 1; i <=k; i++)
    {
       int in = b[i];
        s+=a[in];
    }

    cout <<s<< endl;

    return 0;
}