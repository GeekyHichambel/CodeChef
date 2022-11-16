#include <iostream>
using namespace std;

int main() {
	  int t;
	  cin >> t;
	  while (t--){
	      int a,b,x,y;
	      cin >> a>>b>>x>>y;
	      float chef=float(a)/float(x);
	      float chefina=float(b)/float(y);
	      
	      if (chef > chefina){
	          cout << "chefina" <<endl;
	      }
	      if (chefina > chef){
	          cout << "chef" <<endl;
	      }
	      if (chef==chefina){
	          cout << "both" <<endl;
	      }
	  }
	return 0;
}
