#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >>t;
	 while(t--){
	     int X;int Y;int Z;
	     cin >>X>>Y>>Z;
	     Z=Z-Y;
	     Z=Z/X;
	     cout << Z <<endl;
	 }
	return 0;
}
