#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while(t--){
	     int X,A,B;
	     cin >>X>>A>>B;
	     B=2*B;
	     A=A+B;
	     if (A>=X){
	         cout << "Qualify"<<endl;
	     }
	     else{
	      cout << "NotQualify"<<endl;   
	     }
	 }
	return 0;
}
