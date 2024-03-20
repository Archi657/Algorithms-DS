#include <iostream>
using namespace std;
 void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE  
}
int main(){
   init_code(); 
   int t;
   cin >> t;
   int n;
   string s ;
   while(t--){
      cin >> n ;
      cin >> s ;
      for (int i = 0; i < n; i++)
      {
         if ((s[i]=='L'&& s[i+1]=='L') || (s[i]=='R'&&s[i+1]=='R'))
         {
            cout << "YES" << endl ;
            break;
         }else if(i==s.length()-1){
            cout << "NO" << endl ;
         }
         
      }
      

   } 

   return 0;
}