#include <bits/stdc++.h>
typedef long long ll;
#define for(n) for(int i=0;i<n;i++)
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
   int n,x,y;cin >> n ;
   ll unos=0,ceros=0;
   for (n)
   {
      cin >> x ;
      if (x==1)
      {
         unos ++ ;
      }else if(x==0){
         ceros ++ ;
      }
   }
   cout << unos*pow(2,ceros) << endl;
   //cout << (1ll << ceros)*(ll)unos << '\n';
}

int main() {
   init_code();
   fast
   tc 
}