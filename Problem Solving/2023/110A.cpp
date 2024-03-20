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
   string s;
   int cont=0;
   cin >> s ;
   for (int i = 0; i < s.length(); ++i)
   {
      if (s[i]=='4' )
      {
         cont++;
      }
      if (s[i]=='7')
      {
         cont++;
      }
   }
   if (cont==4 || cont ==7)
   {
      cout << "YES" ;
   }else{
      cout << "NO" ;
   }
return 0;
}