#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    int d=a+b+c;
	    if (a>(d-a)||b>(d-b)||c>(d-c)){
	        cout << "YES" <<endl;
	    }
	    else{
	        cout << "NO" <<endl;
	    }
	}
	return 0;
}
