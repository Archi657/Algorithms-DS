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
   int h,m;
   cin >> h >> m; //0 1
   int mcount = 0;
   while(h!=24){
      //cout << "h: " << h << "h: " << m << "\n"; 
      if(m==60){
         //cout << "entro al if " ;
         m=0;
         h++;
      }else{
         m++;
         mcount++;//2
      }
      
   }
   //cout << "h: " << h << "h: " << m << "\n";
   cout << mcount << "\n";
   //cout << "h: " << h << "h: " << m << "\n";
}
 
int main() {
   init_code();
   fast
   tc 
}