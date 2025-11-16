#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool f = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='0')
        {
            cout <<'1';
        }
        else{
            cout<<'0';
        }
    }
    cout <<endl;

    return 0;
}