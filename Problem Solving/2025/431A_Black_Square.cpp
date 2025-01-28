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
	std::vector<int> numbers;

    // Read the entire first line as a string
    std::string line;
    std::getline(std::cin, line);

    // Use a stringstream to parse integers from the line
    std::stringstream ss(line);
    int num;
    while (ss >> num) {
        numbers.push_back(num); // Add each integer to the vector
    }

   string s;
   cin >> s;
   int suma = 0;
   for (int i = 0; i < s.length(); ++i)
   {
   	int number = s[i] - '0';
   	suma += numbers[number-1];
   }
   cout << suma;
}
 
int main() {
   init_code();
   fast
   solve();
}