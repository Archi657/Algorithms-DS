#include<bits/stdc++.h>
using namespace std;
 void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE  
}
int main(){
   init_code(); 
   int p,t,n,l,x;
   int ri;
   int de;
   cin >> t;
   while(t--){
      cin >> n >> l >> x ;
      if (n==0 || l==0 || x ==0)
      {
         cout << 0 << endl;
         continue;
      }
      else if ((n-l)>l)
      {
         cout << (l)*x << endl;
      }else {
         cout << (n-l)*x << endl;
      }
      //cout << "case# " << t << endl << "n: " <<n << " l: "<<l << " x: "<<x << " p: " <<p << endl << endl; 
      // cout << p*x << endl;
   }
   //cout << cont;
   return 0;
}