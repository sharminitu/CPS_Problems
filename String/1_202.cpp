#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;

    int n = a.length();

    for(int i =0;i<n;i++){
        if(a[n-4=='2']&&a[n-3]=='0'&&a[n-2]=='2'&&a[n-1]=='3'){
            a[n-1]='4';
        }
    }
    cout<<a<<endl;
    return 0;
}