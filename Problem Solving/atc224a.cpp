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
   string s ; cin >> s;
   if ((s[s.length()-1]=='r')&&(s[s.length()-2]=='e') )
   {
      cout << "er" << endl;
   }else if((s[s.length()-1]=='t')&&(s[s.length()-2]=='s')&&(s[s.length()-3]=='i')){
      cout << "ist" << endl;
   }

   return 0;
}