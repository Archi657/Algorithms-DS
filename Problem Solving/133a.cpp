#include <bits/stdc++.h>
#define ll long long int
//#define for(n) for(int i=0;i<n;i++)
#define tc solve();
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
 void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE  
}
void solve() {

}

int main() {
   init_code();
   fast
   string s ;
   cin >> s ;
   for (int i = 0; i < s.length(); ++i)
   {
      if (s[i]=='H'||s[i]=='Q'||s[i]=='9')
      {
         cout << "YES" ;
         return 0;
      }
   }
   cout << "NO" ;
   return 0; 
}