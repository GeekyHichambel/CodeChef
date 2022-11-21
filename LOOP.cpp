#include <iostream>
using namespace std;

int main() {
	   int t;
	   cin >> t;
	   while(t--){
	       int a,b,m;
	       cin >> a >> b >> m;
	       int x=abs(a-b);
	       int y=abs(m-x);
	       if (x>=y){
	           cout << y <<endl;
	       }
	       else{
	           cout << x <<endl;
	       }
	   }
	return 0;
}
