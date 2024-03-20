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


int main() {
   init_code();
   fast
   //tc 
   int t;
   int a[t];
   for (int i = 0; i < t; ++i)
   {
      cin >> a[i];
   }
   int cont=0;
   for (int i = 0; i < t; ++i)
   {
      if ((a[i]<4) && ((a[i]+a[i+1])>4))
      {
         cont++;
      }else if((a[i]<4) && ((a[i]+a[i+1])<=4)){
         cont++;
         i++;
      }
   }
   cout << cont ;
}