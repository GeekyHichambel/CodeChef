#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >>t;
	 while(t--){
	     int X;int Y;
	     cin >>X>>Y;
	     if (X<Y){
	         cout << "REPAIR" <<endl;
	     }
	     if (Y<X){
	         cout << "NEW PHONE"<< endl;
	     }
	     if (X==Y){
	         cout << "ANY"<<endl;
	     }
	 }
	return 0;
}
