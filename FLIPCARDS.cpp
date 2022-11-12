#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while(t--){
	     int N;int X;
	     cin >> N >>X;
	     int d=N-X;
	     if (X==0||N==X){
	         cout  << "0" <<endl;
	     }
	     else{
	         if (d<X){
	             cout << d <<endl;
	         }
	         else{
	             cout << X <<endl;
	         }
	     }
	 }
	 
	return 0;
}
