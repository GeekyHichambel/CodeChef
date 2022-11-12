#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while(t--){
	     int a;int b;int c;int d;
	     cin >> a >> b >> c >> d;
	     int sum=0;
	     int first=(a>b)?(a):(b);
	     int second=(c>d)?(c):(d);
	     sum=first+second;
	     cout << sum <<endl;
	 }
	return 0;
}
