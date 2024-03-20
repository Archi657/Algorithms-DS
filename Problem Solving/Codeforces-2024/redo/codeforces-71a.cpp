#include <bits/stdc++.h>
#define ll long long int
//#define for(n) for(int i=0;i<n;i++)
#define tc int t;cin>>t;while(t--) solve();
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
 void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE  
}

void solve() {
	string text;
   cin >> text;
   if(text.length()>10){
      cout << text[0] << text.length()-2 << text[text.length()-1] ;
   }else{
      cout << text ; 
   }
   cout << "\n" ;
}
 
int main() {
   init_code();
   fast
   tc 
}