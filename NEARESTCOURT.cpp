#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while (t--){
	     int x;int y;
	     cin >> x >> y;
	     int a=(x+y)/2;
	     if (x>y){
	         x=x-a;
	         cout << x <<endl;
	     }
	     else{
	         y=y-a;
	         cout << y << endl;
	     }
	 }
	return 0;
}
