#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int r = a[0];
    for (int i = 1; i < n; i++)
    {
      if(a[i]>a[i-1]){
        r = a[i];
      }
      else{
        break;
      }
     
    }
    cout << r << endl;

    return 0;
}