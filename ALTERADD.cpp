#include <iostream>
using namespace std;

int main() {
	  int t;
	  cin >> t;
	  while(t--){
	      int a,b;
	      cin >> a >>b;
	      if ((b-a)%3==0||(b-a)%3==1){
	          cout << "YES" <<endl;
	      }
	      else{
	          cout << "NO" <<endl;
	      }
	  }
	return 0;
}
