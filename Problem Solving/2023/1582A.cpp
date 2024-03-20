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
    //distribuir song / 2 concerts
    int a,b,c;
    cin >> a >> b >> c ;
    if ((a+2*b+3*c)%2==0)
    {
        cout << 0 << endl;
    }else{
        cout << 1 << endl;
    }
}

int main() {
   init_code();
   fast
   tc 
}