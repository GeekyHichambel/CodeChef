#include <iostream>
using namespace std;

int main() {
	  int t;
	  cin >> t;
	  while (t--){
	      int s,x,y,z;
	      cin >> s >> x >> y >>z;
	      int a = s-(x+y);
	      if (z<=a){
	          cout << "0" <<endl;
	      }
	      else{
	      if (z<=a+x||z<=a+y){
	          cout << "1" <<endl;
	      }
	      else{
	          cout << "2" <<endl;
	      }
	      }
	  }
	return 0;
}
