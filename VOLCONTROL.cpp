#include <iostream>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int x;int y;
	    cin >>x>>y;
	    int min=(x>y)?(x-y):(y-x);
	    cout << min <<endl;
	}
	return 0;
}
