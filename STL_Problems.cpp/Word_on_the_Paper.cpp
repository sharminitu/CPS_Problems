#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void ans()
{
    char s[8][8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>s[i][j];
        }
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if(s[i][j]>=97&&s[i][j]<=122){
                cout<<s[i][j];
            }
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
