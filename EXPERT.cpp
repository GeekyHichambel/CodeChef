#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >>t;
     while(t--){
         int X;int Y;
         cin >>X>>Y;
         float f=X-(X/2);
         if (Y>=f){
             cout << "YES" <<endl;
         }
         else{
             cout << "NO" <<endl;
         }
     }
	return 0;
}
