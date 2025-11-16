#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void ans()
{
   map<char ,int>mp; 
    char c;
    bool f =0;
    for(int i=0;i<4;i++){
        cin>>c;
        mp[c]++;
    }

   if (mp.size()==2)
   {
       cout << "Yes" << endl;
   }
   else
   {
       cout << "No" << endl;
   }

}
int main()
{
    optimize();
    ans();

    return 0;
}
