#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >>t;
	 while(t--){
	     int X;int Y;
	     cin >>X>>Y;
	     Y=Y*X;
	     Y=Y/100;
	     cout << Y <<endl;
	 }
	return 0;
}
