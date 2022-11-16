#include <iostream>
using namespace std;

int main() {
	  int t;
	  cin >> t;
	  while (t--){
	      int a,x,b,y;
	      cin >> a >> x >> b >>y;
	      float sp_a=float(a)/float(x);
	      float sp_b=float(b)/float(y);
	      if(sp_a>sp_b){
	          cout << "Alice" <<endl;
	      }
	      else{
	      if (sp_b>sp_a){
	          cout << "Bob" <<endl;
	      }
	      else{
	          cout << "Equal" <<endl;
	      }
	     }
	  }
	return 0;
}
