#include <bits/stdc++.h>
using namespace std;
int main()
{

  
    int t;
    cin >> t;
    char a[100];
    cin >> a;
    bool f = 1;

    for (int i = 0; i < t-1; i++)
    {
        if ((a[i] == 'a' && a[i + 1] == 'b') || (a[i] == 'b' && a[i + 1] == 'a'))
        {
            f = 0;
            break;
        }
    }
        if (f==0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    return 0;
}