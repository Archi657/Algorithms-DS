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

void solve() {
   int n; cin >> n;
   list<int> cards;
   int aux;
   for (int i = 0; i < n; ++i)
   {
      cin >> aux;
      cards.push_front(aux);
      //cout << "Inserted: " << aux << endl; // Debug line
   }
   //for (auto v : drinks) cout << v << " ";
   int sev=0;
   int dim=0;
   int i=1;
   while(cards.size()>0){
      if(i%2!=0){
         if(cards.back() > cards.front()) {
            sev+= cards.back();
            cards.pop_back();
         }else{
            sev+= cards.front();
            cards.pop_front();
         }
      }else{
         if(cards.back() > cards.front()) {
            dim+= cards.back();
            cards.pop_back();
         }else{
            dim+= cards.front();
            cards.pop_front();
         }
      }
      i++;
      //cout << "i " << i << " sev " << sev << " " << " dim " << dim << endl;
      
   }
   cout << sev << " " << dim;
}
 
int main() {
   init_code();
   fast
   solve();
}