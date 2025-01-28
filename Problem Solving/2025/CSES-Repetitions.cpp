#include <bits/stdc++.h>
#define ll long long int
//#define for(n) for(int i=0;i<n;i++)
//#define tc int t;cin>>t;while(t--) solve();
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE  
}

void solve() {
   string s;
   cin >> s;
   int ac =0;
   int cc =0;
   int gc =0;
   int tc =0;
   for (int i = 0; i < s.length(); i++)
   {
      if (s[i] == 'A' && ) ac += 1;
       else if (s[i] == 'C') cc += 1;
       else if (s[i] == 'G') gc += 1;
       else if (s[i] == 'T') tc += 1;
   }
   if(ac>cc && ac>gc && ac>tc){
      cout << ac;
   }else if(cc>ac && cc>gc && cc>tc){
      cout << cc;
   }else if(gc>cc && gc>ac && gc>tc){
      cout << gc;
   }else if(tc>cc && tc>gc && tc>ac){
      cout << tc;
   }
}
 
int main() {
   init_code();
   fast
   solve();
}