#include <bits/stdc++.h>
#define ll long long 
//#define for(n) for(int i=0;i<n;i++)
#define tc ll t;cin>>t;while(t--) solve();
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
 void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE  
}
void solve() {

}

int main() {
   init_code();
   fast
   solve();
   int a,b,c;
   cin >> a >> b >> c;
   vector<int> v;
   int op1=a+b*c;
   int op2=a*(b+c);
   int op3= a*b*c;
   int op4=(a+b)*c;
   int op5=a+b+c;
   v.push_back(op1);
   v.push_back(op2);
   v.push_back(op3);
   v.push_back(op4);
   v.push_back(op5);

   sort(v.begin(),v.end());
   cout << v[v.size()-1];
  
}