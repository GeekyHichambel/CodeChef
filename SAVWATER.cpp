#include <iostream>
using namespace std;

int main() {
      int t;
      cin >> t;
      while(t--){
          int h,x,y,c;
          cin >>  h >> x >> y >> c;
          int fin = h*(x+(y/2));
          if (fin<=c){
              cout << "YES" << endl;
          }
          else{
              cout << "NO" << endl;
          }
      }
	return 0;
}
