#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while(t--){
	     int C;int X;int Y;
	     cin >>C>>X>>Y;
	     C=C-X;
	     Y=C*Y;
	     cout << Y <<endl;
	 }
	return 0;
}
