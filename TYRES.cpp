#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--){
      int n;
      cin >> n;
      int bike=n%4;
      if (bike>=2){
          cout << "YES" <<endl;
      }
      else{
          cout << "NO" <<endl;
      }
  }
	return 0;
}
