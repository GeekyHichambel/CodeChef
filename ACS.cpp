#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while(t--){
	     int p;
	     cin >> p;
	     if (p>=100){
	         int r=p%100;
	         int q=p/100;
	         if (q+r<=10){
	             cout << q+r <<endl;
	         }
	         else{
	             cout << "-1" <<endl;
	         }
	     }
	     else{
	         if (p<=10){
	             cout << p <<endl;
	         }
	         else{
	             cout << "-1" <<endl;
	         }
	     }
	 }
	return 0;
}
