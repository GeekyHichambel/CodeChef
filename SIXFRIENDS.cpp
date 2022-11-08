#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >>t;
	 while(t--){
	     int X;int Y;
	     cin >>X>>Y;
	     X=3*X;
	     Y=Y*2;
	     int min;
	     min=(X<Y)?(min=X):(min=Y);
	     cout << min <<endl; 
	 }
	return 0;
}
