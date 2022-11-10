#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >>t;
	 while(t--){
	     int x;int y;
	     cin >> x>>y;
	     int reb=(x>y)?(y):(x);
	     cout << reb <<endl;
	 }
	return 0;
}
