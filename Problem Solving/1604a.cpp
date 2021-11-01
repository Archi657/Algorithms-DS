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
	int n;
	cin >> n ;
	int v[n],acum=0;
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i];
		acum+=v[i];
	}
	//cout << acum << endl;
	cout << (n*(n))/2 << endl;

}

int main() {
   init_code();
   fast
   tc 
}