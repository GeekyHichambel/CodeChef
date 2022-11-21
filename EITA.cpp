#include <iostream>
using namespace std;

int main() {
	  int t;
	  cin >> t;
	  while(t--){
	      int d,x,y,z;
	      cin >> d >> x >> y >> z;
          int strat1=x*7;
          int strat2=(y*d)+(z*(7-d));
          if (strat1>strat2){
              cout << strat1 <<endl;
          }
          else{
              cout << strat2 <<endl;
          }
	  }
	return 0;
}
