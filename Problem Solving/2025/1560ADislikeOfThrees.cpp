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

// 1,2,4,
// t = 3
// 1,2,3,4
// candidate = 1
// 


void solve() {
   int t;
   cin >> t;
   int candidate = 0;
   int pol=0;

   while(pol!=t){ 
      candidate+=1;
      string s = to_string(candidate);
      if((candidate % 3 != 0) && (s[s.length()-1] != '3')){
         pol++; 
      }
   }
   cout << candidate << "\n" ; 
}
 
int main() {
   init_code();
   fast
   tc 
}