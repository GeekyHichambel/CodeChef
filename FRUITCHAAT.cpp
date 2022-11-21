#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while (t--){
	     int x,y;
	     cin >> x >> y;
	     x=x/2;
	     if (x>y){
	         cout << y <<endl;
	     }
	     else{
	         cout << x <<endl;
	     }
	 }
	return 0;
}
