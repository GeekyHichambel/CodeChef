#include <iostream>
using namespace std;

int main() {
	     int t;
	     cin >> t;
	     while(t--){
	         int A;int B;int C;
	         cin >> A>>B>>C;
	         if (C<=B&&A<=B){
	             cout << "Yes" <<endl;
	         }
	         else{
	             cout << "No" << endl;
	         }
	     }
	return 0;
}
