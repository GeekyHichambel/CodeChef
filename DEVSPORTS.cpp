#include <iostream>
using namespace std;

int main() {
	  int t;
	  cin >> t;
	  while(t--){
	      int z,y,a,b,c;
	      cin >> z >> y >> a >> b >> c;
	      int i=z-y;
	      if (i>=a+b+c){
	          cout << "YES" << endl;
	      }
	      else{
	          cout << "NO" << endl;
	      }
	  }
	return 0;
}
