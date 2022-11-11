#include <iostream>
using namespace std;

int main() {
	   int t;
	   cin >> t;
	   while(t--){
	       int X;int Y;int Z;
	       cin >> X >> Y >>Z;
	       if (Z%X==0&&Z%Y==0){
	         cout << "ANY" <<endl;
	       }
	       else{
	       if (Z%X==0){
	           cout << "CHICKEN" <<endl;
	       }
	       if (Z%Y==0){
	           cout << "DUCK" <<endl;
	       }
	       if (Z%X!=0&&Z%Y!=0){
	           cout << "NONE" <<endl;
	       }
	     }
	   }
	return 0;
}
