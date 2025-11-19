#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        long long  n;
        cin>>n;
        int a[n];
        long long s=0;
        
        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }
        long long  m = round(sqrt(s*1.0));

        if(m*m==s){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}