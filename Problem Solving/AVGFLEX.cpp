#include<bits/stdc++.h>
using namespace std;
 void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE  
}
void recorrer(int valor,int vec[] ,int size, int j);
int solve,cont=0;
int main(){
   init_code(); 
   int t,n,n1;
   cin >> t;
   while(t--){
      cont=solve=0;
      cin >> n ;
      int vec[n];
      for (int i = 0; i < n; i++)
      {
         cin >> vec[i];      
      } 
      long long less=0,more=0,c=0;
      for (int i = 0; i < n; ++i)
      {
         less=0,more=0;
         for (int j = 0; j < n; ++j)
         {
            if (vec[j]<=vec[i])
            {
               less++;
            }
            if (vec[j]>vec[i])
            {
               more++;
            }
         }
         if (less>more)
         {
            c++;
         }
      }
      cout << c << endl ;
     
   }
   
   return 0;
}

