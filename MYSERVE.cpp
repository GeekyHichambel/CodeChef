#include <iostream>
using namespace std;

int main() {
     int t;
     cin >> t;
     while (t--){
         int p,q;
         cin >> p >>q;
         int f=(p+q)/2;
         if (f%2==0){
             cout << "ALice" <<endl;
         }
         else{
             cout << "Bob" <<endl;
         }
     }
	return 0;
}
