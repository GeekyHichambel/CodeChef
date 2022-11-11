#include <iostream>
using namespace std;

int main() {
	  int t;
	  cin >> t;
	  while(t--){
	      int N;
	      cin >> N;
	      int a=N/4;
	      if (N%4!=0){
	          a++;
	      }
	      cout << a <<endl;
	  }
	return 0;
}
