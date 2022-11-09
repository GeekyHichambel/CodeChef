#include <iostream>
using namespace std;

int main() {
	int t;
	cin >>t;
	while (t--){
	    int x;int y;
	    cin >> x>>y;
	    x=100*x;
	    y=10*y;
	    if (x<y){
	        cout << "Disposable" <<endl;
	    }
	    else{
	        cout << "Cloth" <<endl;
	    }
	}
	return 0;
}
