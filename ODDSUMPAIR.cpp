#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while (t--){
	     int A;int B;int C;
	     cin >>A>>B>>C;
	     if (((A+B)%2!=0)||((B+C)%2!=0)||((A+C)%2!=0)){
	         cout << "YES" <<endl;
	     }
	     else{
	         cout << "NO" <<endl;
	     }
	 }
	return 0;
}
