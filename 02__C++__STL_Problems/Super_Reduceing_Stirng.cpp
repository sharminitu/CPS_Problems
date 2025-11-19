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
    cin>>s;

    int ok =1;

    while(ok){
        ok =0;

        for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1]){
                ok=1;
                s.erase(i,2);
                break;
            }
        }
    }

    if(s==""){
        s=="Empty String";
    }

    cout<<s<<endl;

   
}
int main()
{
    optimize();
    ans();

    return 0;
}
