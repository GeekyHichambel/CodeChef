#include <iostream>
using namespace std;

int main() {
	  int t;
	  cin >> t;
	  while (t--){
	      int x,y;
	      cin >> x >> y;
	      if (y%x==0){
	      x=(y/x)-1;
	      cout << x << endl;
	      }
	      else{
	          x=y/x;
	          cout << x <<endl;
	      }
	  }
	return 0;
}
