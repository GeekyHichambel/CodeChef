#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while (t--){
	     int X;int Y;
	     cin >> X>>Y;
	     int B=2*Y;
	     if (B>X){
	         cout << "0" <<endl;
	     }
	     else{
	       cout << X/B <<endl;
	     }
	    }
	return 0;
