#include <iostream>
using namespace std;

int main() {
	  int t;
	  cin >> t;
	  while(t--){
	      int X;int Y;
	      cin >> X >>Y;
	      int min=(X>Y)?(X-Y):(Y-X);
	      cout << min << endl;
    }
	return 0;
}
