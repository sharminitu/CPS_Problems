#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;

    int n = a.length();

    for (int i = 0; i < n; i++)
    {
        cout<<a[i];
        if (i<n-1)
        {
           cout<<" ";
        }
    }
    cout<< endl;
    return 0;
}