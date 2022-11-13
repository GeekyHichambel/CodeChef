#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while (t--){
	     int A;int B;int X;int Y;
	     cin >>A >> B >> X >>Y;
	     if (A>B){
	         A=A-Y;
	         if (A<=B){
	             cout << "YES" <<endl;
	         }
	         else{
	             cout << "NO" <<endl;
	         }
	     }
	     else{
	         A=A+X;
	         if (A>=B){
	             cout << "YES" << endl;
	         }
	         else{
	             cout << "NO" <<endl;
	         }
	     }
	 }
	return 0;
}
