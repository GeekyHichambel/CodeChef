#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while(t--){
	     int X;
	     cin >> X;
	     int a=X/25;
	     if (X%25!=0||X<25){
	         a++;
	     }
	     cout << a <<endl;
	 }
	return 0;
}
