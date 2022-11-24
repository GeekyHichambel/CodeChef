#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--){
	    float a,b,c,d;
	    cin >> a >> b >> c >> d;
	    float x=c/a;
	    float y=d/b;
	    if (x<y){
	        cout << -1  <<endl;
	    }
	    if (x==y){
	        cout << 0 << endl;
	    }
	    if (x>y){
	        cout << 1 << endl;
	    }
	}
	return 0;
}
