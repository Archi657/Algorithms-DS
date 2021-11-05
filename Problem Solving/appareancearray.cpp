#include <bits/stdc++.h>
#define ll long long 
//#define for(n) for(int i=0;i<n;i++)
#define tc ll t;cin>>t;while(t--) solve();
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
 void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE  
}
int a[100];

int main() {
   init_code();
   fast
   int n;
   cin >> n;
   for (int i = 1; i <=n; ++i)
   {
      int x;
      cin>>x;
      ++a[x];
   }
   if (a[4] > 0)
   {
      cout << "YES IT APPEARS";
   }else{
      cout << "IT DOESNT" ;
   }
   return 0;
}

