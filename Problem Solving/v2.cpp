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
   string keyboard;
   cin >> keyboard;
   string palabra;
   int size=palabra.length();
   cin >> palabra;
   int x,y,z=0;
   for (int i = 0; i < size; i++)
   {
      string letra = palabra[i];
      string letra2 = palabra[i+1];
      x= search(letra,keyboard);
      //y= search(letra2,keyboard);
      z+= x-y ;
      i++;
   }
   cout << z;
}

int search(string s,string keyboard){
   int steps,cont=0;
   while(1){
      if((keyboard[cont])!=s){
         cont++;
      }else{
         break ;
      }
   }
   return cont;
}

int main() {
   fast
   tc 
}

