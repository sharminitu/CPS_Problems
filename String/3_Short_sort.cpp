#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string r = "abc";
    cin.ignore();
    while(t--){
    string a;
    cin >> a;
    int c=0;

    for (int i = 0; i < 3; i++)
    {
        if(a[i]!=r[i]){
            c++;
        }
    }
    if(c<=2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
    return 0;
}