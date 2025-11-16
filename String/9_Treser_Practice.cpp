#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,c=0;
    cin >> a;

    string b;
    cin>>b;

    for (int i = 0; i < b.length(); i++)
    {
        if(b[i]=='|'){
            c++;
        }
        if(b[i]=='*'){
            if(c==1){
                cout<<"in"<<endl;
            }
            else{
                cout<<"out"<<endl;
            }
            break;
        }
    }

    return 0;
}