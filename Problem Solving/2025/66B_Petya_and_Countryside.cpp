#include <bits/stdc++.h>
#define ll long long int
//#define for(n) for(int i=0;i<n;i++)
#define tc int t;cin>>t;while(t--) solve();
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

   void init_code() {
     #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
     #endif // ONLINE_JUDGE  
   }

   void solve() {
     ll n;
     cin >> n;
     ll num[1000];
     vector < ll > v(n, 0); // Initialize all elements to 0
     for (ll i = 0; i < n; i++) {
       ll aux;
       cin >> aux;
       num[i] = aux;
       //cout << num[i] << endl;
       v[i] = 0;
     }

     //store results?
     // vector
     for (ll i = 0; i < n; i++) {
       for (ll j = 0; j < n; j++) {
         //cout << "i " << i << " j " << j << endl << endl;
         int max = 0;
         if (j == n && max > v[i]) { // si max > reemplazar
           v[i] = max;
         } else if (i == j) { // si i==j = +1
           //cout << "Posicion i " << i << " mismo numero " << j << endl ;
           
           v[i] += 1;
           
           continue;
         } else {
           if (num[i] >= num[j]) {
             if (num[j] > num[j - 1] && num[j] > num[j + 1] && j >= 1 && max < v[i]) {
               
               max = v[i];
               //cout << "nuevo max " << max << endl;
               v[i] = 0;
               continue;
             } else {
               v[i] += 1;
               //cout << "v[i] " << v[i] << endl;
             }
           } else {
            // cout << "siguiente numero " << endl<< endl;
             break;
           }
         }

         //cout << num[i] << " > " << num[j] << endl << endl;
         //cout << "v[i] " << v[i] << endl << endl;

       }
     }

     cout << * max_element(v.begin(), v.end());

   }

   int main() {
     init_code();
     fast
     solve();
   }