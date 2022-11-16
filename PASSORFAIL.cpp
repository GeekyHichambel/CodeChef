#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while(t--){
	     int n,x,p;
	     cin >> n >> x >> p;
	     int i=n-x;
	     int m=x*3;
	     int t=m-i;
	     if (t>=p){
	         cout << "PASS" <<endl;
	     }
	     else{
	         cout << "FAIL" <<endl;
	     }
	     
	 }
	return 0;
}
