#include <iostream>
using namespace std;

int main() {
      int t;
      cin >>t;
      while(t--){
          int x;int y;int z;
          cin >>x>>y>>z;
          x=x-y;
          x=x+z;
          cout << x <<endl;
      }
	return 0;
}
