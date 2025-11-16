#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void ans()
{
    int n,m;
    cin >> n>>m;

    for(int i=0;i<n;i++){
        if(i<m){
            cout<<"OK"<<endl;
        }
        else{
            cout << "Too Many Requests"<<endl;
        }
    }

}
int main()
{
    optimize();
        ans();
}
