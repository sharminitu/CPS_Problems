#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void ans()
{
    int a[8][8];

    vector<int>v;
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            cin>>a[i][j];
            if(i==j){
                if(a[i][j] == 'R'){
                    cout<<"R"<<endl;
                    break;
                }
                else{
                    cout<<"B";
                    break;
                }
            }
        }
    }
}
int main()
{
    optimize();

    int test;
    cin >> test;
    while (test--)
        ans();
}
