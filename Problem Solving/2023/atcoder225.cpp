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
int a(int n){
   return ( (n != 0) ? n*a(n-1):1);
}
int ans(int n,int k){
   return a(n) / (a(k)*a(n-k));
}

int main() {
   init_code();
   fast
   string s;
   cin >> s ;
   sort(s.begin(),s.end());
   int cont=0;
   for (int i = 0; i < s.length(); ++i)
   {
      if (s[i]==s[i+1])
      {
         continue;
      }else{
         cont ++;
      }
   }
   if (s.length()==cont)
   {
      cout << cont*s.length()-cont ;
      return 0;
   }else
      cout << ans(s.length() , cont); 
}
