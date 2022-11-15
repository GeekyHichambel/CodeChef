#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while (t--){
	     int X;
	     cin >> X;
	     if (X%5!=0&&X%10!=0){
	         cout << "-1" <<endl;
	     }
	     else{
	         int a=X/10;
	         int r=X%10;
	         if (r==5){
	             ++a;
	         }
	         cout << a <<endl;
	     }
	 }
	return 0;
}
