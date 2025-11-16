#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin>>m;

    string s;
    cin >> s;
    bool f = 0;

    for (int i = 0; i < s.length()-1; i++)
    {
        if (s[i] ==s[i+1])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}