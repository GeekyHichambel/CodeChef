#include <iostream>
using namespace std;

int main() {
	  int t;
	  cin >> t;
	  while (t--){
	     int x,y,z;
	     cin >> x >> y >>z;
	     int a=x+y;
	     if (a==z){
	         cout << "EQUAL"<<endl;
	     }
	     else{
	     if (a<z){
	         cout << "PLANEBUS" <<endl;
	     }
	     else{
	         cout << "TRAIN" <<endl;
	     }
	     }
	  }
	return 0;
}
