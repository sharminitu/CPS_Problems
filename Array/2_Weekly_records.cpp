#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int a[7];
        int s = 0;
        for (int i = 0; i < 7; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < 7; i++)
        {
            s+=a[i];
        }

        cout<<s<<" ";
    }
    cout<<endl;

    
    return 0;
}