#include <iostream>
using namespace std;

int main() {
     int t;
     cin >>t;
     while (t--){
         int X; int Y;
         cin >>X>>Y;
         if (X>Y){
             cout << "0"<<endl;
         }
         else {
             Y=Y-X;
             cout << Y<<endl;
         }
     }
	return 0;
}
