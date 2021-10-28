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

int main() {
   init_code();
   fast
   int n;
   cin >> n;
   int vec[n];
   for (int i = 0; i < n; ++i)
    {
       cin >> vec[i];
    } 
   int aux;
   aux=vec[0];
   int cont=1;
   for (int i = 0; i <  n; ++i)
   {
      if (vec[i]!=aux)
      {
         aux=vec[i];
         cont++;
      }
   }
   cout << cont;
   return 0;
}