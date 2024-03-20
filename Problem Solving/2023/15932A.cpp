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
   int t,a,b,c ; //cases
   cin >> t;
   while(t--){
     cin >> a >> b >> c;
     cout << max(0,max(b,c)+1-a) << " " << max(0,max(a,c)+1-b)<< " " << max(0,max(a,b)+1-c) << endl;
   }
    

   return 0;
}