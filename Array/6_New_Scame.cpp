#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a[8];
    bool f = 1;

    for (int i = 0; i < 8; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 8; i++)
    {
        if (a[i]>a[i+1] && a[i]>=100 || a[i]<=675 && a[i]%25!=0){
              f=0;
    }
    if (f==1)
    {
        cout << "Yes" << endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
}