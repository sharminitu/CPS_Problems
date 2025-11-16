#include <bits/stdc++.h>
using namespace std;
int main()
{
    
        int n,k;
        cin>>n>>k;
        int a[n];
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ind = n-k;

        for (int i =n-k; i < n; i++)
        {
            cout << a[i] << " ";
        }

        for (int i = 0; i < n-k; i++){
            cout << a[i] << " ";
        }
        cout<<endl;
        
            

    return 0;
}