#include <iostream>
using namespace std;

int main() {
      int t;
      cin >> t;
      while (t--){
          int x,y,z;
          cin >> x >> y >>z;
          int t=x*y;
          if (x<=3){
              cout << t <<endl;
          }
          else{
            int f=x/3;
            if (x%3==0){
                --f;
            }
            f=f*z;
            t=t+f;
            cout <<  t <<endl;
          }
      }
	return 0;
}
