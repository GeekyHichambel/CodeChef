#include <iostream>
using namespace std;

int main() {
	  int t;
	  cin >> t;
	  while(t--){
	      int X;int Y;
	      cin >> X >> Y;
	      if (X>Y){
	          cout << "CAR" << endl;
	      }
	      if (Y>X){
	          cout << "BIKE" << endl;
	      }
	      if (X==Y){
	          cout << "SAME" << endl;
	      }
	  }
	return 0;
}
