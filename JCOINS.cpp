#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while(t--){
	     int X;int Y;
	     cin >>X>>Y;
	     X=X*10;
	     Y=Y*5;
	     X=X+Y;
	     std::cout << X << std::endl;
	 }
	return 0;
}
