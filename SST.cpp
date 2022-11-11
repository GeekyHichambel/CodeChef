#include <iostream>
using namespace std;

int main() {
	      int t;
	      cin >>t;
	      while (t--){
	          int A;int B;
	          cin >> A >> B;
	          A=A*10;
	          B=B*5;
	          if (A==B){
	              cout << "ANY" <<endl;
	          }
	          if (A>B){
	              cout << "FIRST" <<endl; 
	          }
	          if (B>A){
	              cout << "SECOND" <<endl;
	          }
	      }
	return 0;
}
