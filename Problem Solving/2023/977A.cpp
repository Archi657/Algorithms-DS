#include <bits/stdc++.h>
using namespace std;
void init_code(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE	
}

int main(){
	init_code();
	int n,k ;
    cin >> n >> k ;
    for (int i = 0; i < k; ++i){
        if (n%10==0)
        {
            n/=10;
        }
        else{
            n-=1;
        }
    }
    cout << n ;
	return 0;
}

