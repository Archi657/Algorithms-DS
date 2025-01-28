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
	int n;
	cin >> n ;
	int police=0;
	int crimes=0;
	for (int i = 0; i < n; ++i)
	{
		int aux;
		cin >> aux;
		if(aux>=1){
			police+=aux;
		}

		if(police<=0 && aux==-1){
			crimes++;
		}else if(police>0 && aux==-1 && police!=0){
			police--;
		}
	}
	cout << crimes;
}
 
int main() {
   init_code();
   fast
   solve();
}