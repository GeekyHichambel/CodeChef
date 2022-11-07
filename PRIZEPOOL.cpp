#include <iostream>
using namespace std;


int main() {
	int t;
	cin >>t;
	while (t--){
	    int X;int Y;
	    cin >> X >> Y;
	    X=X*10;
	    Y=Y*90;
	    int total=0;
	    total=X+Y;
	    cout << total <<endl;
	} 
	return 0;
}
