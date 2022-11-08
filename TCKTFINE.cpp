#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int X;int P;int Q;
	    cin >> X>>P>>Q;
	    X=X*(P-Q);
	    cout << X << endl;
	}
	return 0;
}
