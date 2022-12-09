#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
	    if (n==k||n<=5){
	        cout << 0 << endl;
	    }
	    else{
	        int a=(n-1)/5;
	        int b=(k-1)/5;
	        cout << a-b << endl;
	    }
	}
	return 0;
}
