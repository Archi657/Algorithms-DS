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
   string s;
   int a=0,b=0,c=0;
   cin >> s ;
   for (int i = 0; i < s.length(); ++i)
   {
      if (s[i]=='A')
      {
         a++;
      }
      if (s[i]=='B')
      {
         b++;
      }
      if (s[i]=='C')
      {
         c++;
      }
        
   }
   if ((((a+b+c)%2==0) && (a!=0 && b!=0 && c!=0)&& (a+b)%2==0) || ((a+b)%2==0 && c==0) || ((b+c)%2==0 && a==0)  )
   {
      cout << "YES \n" ;
   }else{
      cout << "NO \n" ;
   }
}

int main() {
   init_code();
   fast
   tc 
}