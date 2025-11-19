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

    int flag =1;
    if(s.size() !=8){
        cout<<"No"<<endl;
        return;
    }

    if(!isupper(s[0])){
        flag =0;
    }

    if ( !isupper(s[7]))
    {
        flag = 0;
    }

    for(int i=1;i<7;i++){
        if(!isdigit(s[i])){
            flag =0;
        }
    }
    if(s[1]=='0'){
        flag =0;
    }

    if(flag){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
int main()
{
    optimize();

   
        ans();

    return 0;
}
