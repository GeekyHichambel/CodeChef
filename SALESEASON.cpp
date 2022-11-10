#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while(t--){
	     int X;
	     cin >> X;
	     if (X<=100){
	         cout << X <<endl;
	     }
	     if (X>100&&X<=1000){
	         cout << X-25 <<endl;
	     }
	     if (X>1000&&X<=5000){
	         cout << X-100 <<endl;
	     }
	     if (X>5000){
	         cout << X-500 <<endl;
	     }
	 }
	return 0;
}
