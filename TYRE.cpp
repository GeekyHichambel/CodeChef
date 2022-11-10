#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while(t--){
	     int N;int M;
	     cin >> N>>M;
	     N=N*2;
	     M=M*4;
	     M=M+N;
	     cout << M <<endl;
	 }
	return 0;
}
