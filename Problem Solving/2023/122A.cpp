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
   int m;cin >> m;
   if  (m%47==0 || m%74==0 || m%4==0 || m%7==0|| m%77==0 ||m%44==0 ||m%444==0 || m%447==0 || m%474==0 || m%477==0 || m%777==0 || m%774==0 || m%744==0 )
   {
      cout << "YES";
   }else {
      cout << "NO";
   }

   return 0;
}