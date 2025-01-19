#include <bits/stdc++.h>
#define ll long long int
//#define for(n) for(int i=0;i<n;i++)
#define tc int t;cin>>t;while(t--) solve();
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE  
}

bool checkIfDiff(string s){
   //cout << s << "\n";
   for (int i = 0; i<s.length(); i++){
      for(int j = i+1; j<s.length(); j++){
         //cout << i << j << endl;
         //cout << "comparing " << s[i] << " " << s[j] << endl ;
         if(s[j]==s[i]){
            return 0;
         }
      }
   }
   return 1;
}

void solve() {
   ll year;
   cin >> year;
   year++;
   while(true){
      string s = to_string(year);
      if (checkIfDiff(s)){
         cout << s ;
         break;
      }
      year++;
   }
}



int main() {
   init_code();
   fast
   solve();
}