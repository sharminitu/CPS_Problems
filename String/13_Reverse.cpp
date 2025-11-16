#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,n;
    cin>>a>>n;
    string s;
    cin>>s;

    reverse(s.begin()+a-1,s.begin()+n);

    cout<<s<<endl;
    return 0;

}