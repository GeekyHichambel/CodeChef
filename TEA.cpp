#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while(t--){
	     int X,Y,Z;
	     cin >> X >> Y >> Z;
	     int a;
	     if (X<=Y){
	         cout << Z <<endl;
	     }
	     else{
	         a=X/Y;
	         if ((X%Y)!=0){
	             a++;
	         }
	         a=a*Z;
	         cout << a <<endl;
	     }
	 }
	return 0;
}
