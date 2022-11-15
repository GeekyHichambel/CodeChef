#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	  int t;
	  cin >> t;
	  while (t--){
	      int w,x,y,z;
	      cin >> w >> x >> y >> z;
	      if (w==x||w==y||w==z||w==x+y||w==x+y+z||w==y+z||w==x+z){
	          cout << "YES" <<endl;
	      }
	      else{
	          cout << "NO" <<endl;
	      }
	  }
	return 0;
}
