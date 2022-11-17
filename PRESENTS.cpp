#include <iostream>
using namespace std;

int main() {
	   int t;
	   cin >> t;
	   while (t--){
	       int n;
	       cin >> n;
	       int gf=n/5;
	       gf=n-gf;
	       if (n>4){
	           cout << gf <<endl;
	       }
	       else{
	       cout << n <<endl;
	       }
	   }
	return 0;
}
