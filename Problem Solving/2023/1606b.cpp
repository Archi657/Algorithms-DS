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
void solve() {
   ll n , k , pc=1,cont=0;
   cin >> n >> k;
   ll n1=n;
   bool a=true,b=true;
   do{
     if((n<2 && cont==0) || (k==0 && cont==0) ){
      a = false;
     }
     if (pc==1 && n>2)
     {
        n-=2; //3 4 5 6 7 8
        pc++; //1 - 2
        cont++; // 1h
      }
      else if(pc<k){
           n-=pc;
        pc*=2;
        cont++;
      }else if(pc>k || pc==k){
        n-=k;
        pc+=k;
        cont++;
      }
   }while(n>0);
 
   if(n1==2){
      cout << 1 << '\n';  
   }else if(a){
   cout << cont << "\n";   
   
   }else{
      cout << 0 << '\n';
   }
   
}
 
int main() {
   init_code();
   fast
   tc 
}