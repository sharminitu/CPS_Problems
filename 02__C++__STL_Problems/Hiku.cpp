#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void ans()
{
    string s;
    string s1;
    string s2;
    getline(cin,s);
    getline(cin, s1);
    getline(cin, s2);
    int c =0,c1=0,c2=0;

    for(int i=0;i<s.length();i++){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            c++;
        }
    }

    for (int i = 0; i <s1.length(); i++)
    {
        if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u')
        {
            c1++;
        }
    }

    for (int i = 0; i < s2.length(); i++)
    {
        if (s2[i] == 'a' || s2[i] == 'e' || s2[i] == 'i' || s2[i] == 'o' || s2[i] == 'u')
        {
            c2++;
        }
    }
    if(c==5&&c1==7&&c2==5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main()
{
    optimize();
    ans();

    return 0;
}
