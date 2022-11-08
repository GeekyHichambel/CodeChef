#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >>t;
	 while(t--){
	     int X;int N;int K;
	     cin >> N>>X>>K;
	     if (N*X<=K)
	     {
	         cout << "YES"<<endl;
	     }
	     else {
	         cout << "NO"<<endl;
	     }
	 }
	return 0;
}
