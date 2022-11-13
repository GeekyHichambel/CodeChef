#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while (t--){
	     int X;int Y;
	     cin >> X>> Y;
	     if (X==Y){
	         cout << "0" <<endl;
	     }
	     else{
	         Y=Y-X;
	         int count=0;
	         while (Y>0){
	             Y=Y-8;
	             count++;
	         }
	         cout << count <<endl;
	     }
	 }
	return 0;
}
