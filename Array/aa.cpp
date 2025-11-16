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

    vector<int>a(n);
    vector<int>b(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int ans =0;
    for (int i = 0; i < n; i++)
    {
        if((a[i+1]%a[i])%2==0){
            cout<<a[i] <<" "<<a[i+1];
            break;
        }
        else{
            cout<<-1;
            break;
        }

    }


    for(auto x :b){
        cout<<x<<endl;
    }
}
int main()
{
    optimize();

    int test;
    cin >> test;
    while (test--)
        ans();
    return 0;
}
