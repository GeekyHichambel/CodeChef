#include <iostream>
#include <math.h>
using namespace std;

int main() {
	  int t;
	  cin >> t;
	  while (t--){
	      int m,h;
	      cin >> m >>h;
          int bmi=(m)/pow(h,2);
          if (bmi<=18){
              cout << 1 <<endl;
          }
          if (bmi>=19&&bmi<=24){
              cout << 2 << endl;
          }
          if (bmi>=25&&bmi<=29){
              cout << 3 <<endl;
          }
          if (bmi>=30){
              cout << 4 <<endl;
          }
	  }
	return 0;
}
