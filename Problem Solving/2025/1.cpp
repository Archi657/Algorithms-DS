#include <bits/stdc++.h>
#define ll long long int
#define tc int t;cin>>t;while(t--) solve();
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}


void solve() {
   int n; cin>> n;
   unordered_set<int> a;
   unordered_set<int> b;
   for (int i = 0; i < n; ++i)
   {
      int tmp;
      cin>>tmp;
      a.insert(tmp);
   }
   for (int i = 0; i < n; ++i)
   {
      int tmp;
      cin>>tmp;
      b.insert(tmp);
   }

   if( (a.size() + b.size() > 3)  ){
      cout << "YES" ;
   }else{
      cout << "NO" ;
   }
   cout << endl;
}

int main() {
   init_code();
   fast
   tc
}
