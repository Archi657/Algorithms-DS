#include <iostream>
using namespace std;

bool primo(int n);
int main(){
   int t,x,y;
   cin >> t ;
   int cont=0;
   while(t--){
      cin >> x >> y ;
      do{
         if(primo(x+2)){
            cont++;
            x=x+2;
         }else{
            x++;
            cont++;
         }
      }while(x<y);
   cout << cont << endl;
   cont =0;
   }
   return 0;
}

bool primo(int n){
   if (n!=1 && n!=0)
   {
      for (int i = 2; i <=n; ++i)
      {
         if (n%i==0)
         {
            return false;
         }
      }
   }
   return true;
}  