#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while (t--){
	     int n;int k;int m;
	     cin >> n>> k >>m;
	     int to=n/m;
	     if (n%m!=0){
	         ++to;
	     }
	     int b=to/k;
	     if (to%k!=0){
	         ++b;
	     }
	     cout << b <<endl;
	 }
	return 0;
}
