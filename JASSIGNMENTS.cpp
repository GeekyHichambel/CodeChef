#include <iostream>
using namespace std;

int main() {
       int t;
       cin >> t;
       while(t--){       
           int X;
           cin >>X;
           X=X+3;
           if (X<=10){
               cout << "Yes" <<endl;
           }
           else{
               cout << "No" <<endl;
           }
       }
	return 0;
}
