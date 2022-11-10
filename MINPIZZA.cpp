#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while(t--){
	     int N;int X;
	     cin >> N >>X;
	     int a=N*X;
	     int b=a/4;
	     if (a%4!=0){
	         b++;
	     }
	     cout << b <<endl;
	 }
	return 0;
}
