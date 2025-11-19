#include<bits/stdc++.h>
using namespace std;
#define Optimeze()ios_base:: sync_with_stdio(false);cin.tie(NULL);cin.tie(NULL);
#define endl '\n'
void ans(){
    string s;
    getline(cin,s);
    int cnt[26] {0};
   
   for(auto x :s){
    if(x!=' '){
        x=tolower(x);
        cnt[x-'a']++;
    }
   }
   int mn = *min_element(cnt,cnt+26);

   if(mn==0){
    cout<<" Not pangram"<<endl;
   }
   else{
    cout<<"pangram";
   }
}
int main(){
   
    ans();

}