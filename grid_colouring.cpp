#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;

    string a;
    cin.ignore();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[j]=='A'||a[j]=='B'){
                a[j]='C';
                a[j] ='D';
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a;
        }
    }
    cout<<endl;
}