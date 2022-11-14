#include <iostream>
using namespace std;

int main() {
	  int t;
	  cin >> t;
	  while (t--){
	      int n;int x;int k;
	      cin >> n >> x >> k;
	      if (k<x){
	          cout << "0" <<endl;
	      }
	      else{
	          int ans=k/x;
	          if (ans>n){
	          cout << n << endl;
	          }
	          else{
	              cout << ans <<endl;
	          }
	      }
	  }
	return 0;
}
