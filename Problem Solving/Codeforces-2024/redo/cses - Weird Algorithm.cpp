#include <bits/stdc++.h>
#define ll long long int
//#define for(n) for(int i=0;i<n;i++)
#define tc int t;cin>>t;while(t--) solve();
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void init_code(){
   fast
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif // ONLINE_JUDGE  
}

void solve() {
}

int main() {
   init_code();
   int t;
   cin>>t;
   while(true){
      cout << t << " " ;
      if (t == 1) break;
      if (t%2 == 0 ) t=t/2;
      else t=(t*3)+1;
   }
}