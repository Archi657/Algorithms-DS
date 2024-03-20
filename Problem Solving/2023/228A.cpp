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
   int vec[4],n;
   for (int i = 0; i < 4; ++i)
   {
      cin >> vec[i];
   }
   int cont=0;
   n= sizeof(vec) / sizeof(vec[0]);
   sort(vec,vec+n);
   for (int i = 1; i < 4; ++i)
   {
      if (vec[i]==vec[i-1])
      {
         cont+=1;
      }
   }
   cout << cont;
   /*for (int i = 0; i < 4; ++i)
   {
      cout << vec[i] << " ";
   }*/
   return 0;
}