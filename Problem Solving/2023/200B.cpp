#include <bits/stdc++.h>
#define ll long long 
//#define for(n) for(int i=0;i<n;i++)
int t;
#define tc solve();
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
 void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE  
}

int main() {
   init_code();
   fast
    int t;
   cin >> t;
   double suma=0;
   for (int i = 0; i < t; ++i)
   {
      double x;
      cin >> x ;
      suma+=x;
   }
   cout << setprecision(14) << suma/t ;
}
