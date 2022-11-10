#include <iostream>
using namespace std;

int main() {
	  int t;
	  cin >> t;
	  while(t--){
	      int X,Y,Z;
	      cin >>X>>Y>>Z;
	      if (X<=Z){
	          if (X+Y<=Z){
	               cout << "2"<<endl;      
	          }
	          else{
	              cout << "1"<<endl;
	          }
	      }
	      else{
	          cout << "0" <<endl;
	      }
	  }
	return 0;
}
