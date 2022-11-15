#include <iostream>
using namespace std;

int main() {
	  int t;
	  cin >> t;
	  while (t--){
	      int a;int b;
	      cin >> a>>b;
	      int f=21-(a+b);
	      if (f>10){
	          cout << "-1" <<endl;
	      }
	      else{
	          cout << f <<endl;
	      }
	  }
	return 0;
}
