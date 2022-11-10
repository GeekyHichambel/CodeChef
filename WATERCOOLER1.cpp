#include <iostream>
using namespace std;

int main() {
	   int t;
	   cin >> t;
	   while(t--){
	       int X;int Y;int M;
	       cin >>X>>Y>>M;
	       X=X*M;
	       if (X<Y){
	           cout << "YES"<<endl;
	       }
	       else{
	           cout << "NO"<<endl;
	       }
	   }
	return 0;
}
