#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while (t--){
	     int x;int y;
	     cin >> x >> y;
	     if (y>x){
	         cout << "0" <<endl;
	     }
	     else{
	         int f=x/y;
	         cout << f <<endl;
	     }
	 }
	return 0;
}
