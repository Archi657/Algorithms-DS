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

}

int main() {
   init_code();
   fast
   int ax,n;
   cin >> n;
   int vec[n+1];
   for (int i = 1; i <= n; ++i)
   {
      cin >> ax;
      vec[ax]=i;
   }
   for (int i = 1; i <= n; ++i)
   {
      cout << vec[i]<< " ";
   }
}