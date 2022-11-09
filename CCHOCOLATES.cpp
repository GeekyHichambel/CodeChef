#include <iostream>
using namespace std;

int main() {
	int t;
	cin >>t;
	while (t--){
	    int x,y,z;
	    cin >>x>>y>>z;
	    x=5*x;
	    y=10*y;
	    x=x+y;
	    y=x/z;
	    cout << y<<endl;
	}
	return 0;
}
