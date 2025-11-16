#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    bool f =0;
    while(t--){
        int n,c=0;
        cin>>n;

        int a[n];

       vector<int>count(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            count[a[i]]++;
        }

      int ans = -1;

        for (int i = 1; i <= n; i++)
        {
           if(count[i]>=3){
           ans = i;
           break;
        }

    }

    cout<<ans<<endl;
}
}