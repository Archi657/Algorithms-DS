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
   int x,y;
   string s;
   int may, cont,days; 
   while(t--){
      cont = 0;
      may = 0;
      days = 0;
      x = 0;
      y= 0;
      cin >> x >> y ;
      cin >> s ;
      for (int i = 0; i < s.length(); ++i)
      {
         if (s[i]=='1')
         {
            cont++;
            days++;
            if (cont>may)
            {
            may=cont;
            }
         }else{
            if (cont>may)
            {
            may=cont;
            }
            cont =0;
         }   
      }


      cout << (days*x)+(may*y) << endl;

      
   }

   return 0;
}