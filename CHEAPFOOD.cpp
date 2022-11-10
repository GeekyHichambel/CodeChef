#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while(t--){
	     int X;
	     cin >> X;
	     int A=(X-(X/10));
	     int B=X-100;
	     if (A<B){
	         cout << X/10 <<endl; 
	     }
	     else{
	         cout << "100" <<endl; 
	     }
	 }
	return 0;
}
