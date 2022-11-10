#include <iostream>
using namespace std;

int main() {
	  int t;
	  cin >>t;
	  while(t--){
	      int A;int B;int X;int Y;
	      cin >> A >> B >> X >> Y;
	      Y=X*Y;
	      A=A*B;
	      if (Y>=A){
	          cout << "YES" <<endl;
	      }
	      else{
	          cout << "NO" <<endl;
	      }
	  }
	return 0;
}
