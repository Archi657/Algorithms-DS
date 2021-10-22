#include <iostream>
using namespace std;
 void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE  
}
int main(){
   init_code(); 
   int t;cin >> t;
   int n,x,p;
   int wrong ;
   int correct ;
   int score ;

   while(t--){
      cin >> n >> x >> p;
      correct = x*3;
      wrong = (x-n);
      score = correct+wrong;
      /*cout << "correct " << correct<< endl;
      cout << "wrong " <<  wrong <<endl;
      cout << "score " << score << endl;*/
      if (score>=p)
      {
         cout << "PASS" << endl;
      }else{
         cout << "FAIL" << endl;
      }
      //cout << correct <<" " << wrong << " " << correct+wrong << endl; 

   }

   return 0;
}