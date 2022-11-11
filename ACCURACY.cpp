#include <iostream>
using namespace std;

int main() {
      int t;
      cin >> t;
      while(t--){
          int X;
          cin >> X;
          if (X==0||X%3==0){
              cout << "0" <<endl;
          }
          else{
                 int a=(X/3)+1;
                 a=a*3;
                 a=a-X;
                 cout << a <<endl;
             }
      }
	return 0;
}
