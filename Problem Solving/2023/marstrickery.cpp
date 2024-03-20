#include <bits/stdc++.h>
#define ll long long 
//#define for(n) for(int i=0;i<n;i++)
#define tc ll t;cin>>t;while(t--) solve();
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
string keyboard;
int cont=0;
void solve() {
   cont=0;
   cin >> keyboard;
   string palabra;
   int size=palabra.length();
   cin >> palabra;
   int z[size];
   for (int i = 0; i < size; i++)
   {
	   char c1,c2;
		c1 = palabra[i]; 
		c2= keyboard[cont];
	    while(c1!=c2){	
           cont++;
           c2 = keyboard[cont];
	    }
	   z[i]=cont;
   }

	 for (int i = 0; i < size; i++)
	 {
		 cout << z[i]<< " ";
	 }
	 

   
}


int main() {
   fast
   tc 
}

