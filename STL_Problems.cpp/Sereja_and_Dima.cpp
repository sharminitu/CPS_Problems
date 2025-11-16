#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void ans()
{
    int n;
    cin >> n;

    int seraja =0;
    int dima =0;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

   int s  =0,d=0,f=1;

   while(!a.empty()){
        if(f==1){
            if(*a.begin()>a.back()){
                s+=a[0];
                a.erase(a.begin());
            }
            else{
                s+=a.back();
                a.pop_back();
            }
            f=2;
        }
        else{
            if(*a.begin()>a.back()){
                d+=a[0];
                a.erase(a.begin());
            }
            else{
                d+=a.back();
                a.pop_back();
            }
            f=1;
        }

   }

   cout<<s<<" "<<d<<endl;
}
int main()
{
    optimize();

    
        ans();
    
}
