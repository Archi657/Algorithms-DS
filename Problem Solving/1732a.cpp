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

void solve(){
	int size=0,gcd=0,cost=0;
	cin >> size;
	int arr[5000];
	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}
	int a=arr[0],b=arr[1];
	sort(arr,arr+size);
	if(a!=arr[0] && b!=arr[1]){
		cost++;
	}
	for (int i = 1; i <=arr[0] && i<=arr[1]; ++i)
	{
		if(arr[0]%i == 0 && arr[1]%i ==0){
			gcd = i;
			break;
		}
	}
	cout << cost << endl;
}

int main(){
	init_code();
	fast
	tc
	return 0;
}