#include <bits/stdc++.h>
#define ll long long int
//#define for(n) for(int i=0;i<n;i++)
#define tc int t;cin>>t;while(t--) solve();
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int letterToNumber(char letter) {
    letter = std::tolower(letter); // Convert to lowercase
    if (letter >= 'a' && letter <= 'z') {
        return letter - 'a' + 1; // Calculate position
    }
    return -1; // Return -1 for invalid input
}

void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE  
}

void solve() {
   string s; cin >> s;
   int ar[999];
   for (int i = 0; i < s.size(); ++i)
   {
      int number = letterToNumber(s[i]);
      ar[i] = number;
   }

   for (int i = 0; i < s.size(); ++i)
   {
      int normal;
      if(ar[i] > ar[i-1]){
         normal = ar[i] - ar[i-1]
      }
      int normal = ar[i] + 
      if(i!=0 ){
         if(ar[i] > ar[i-1])
      }
   }

   cout << s ;

}
 
int main() {
   init_code();
   fast
   solve(); 
}