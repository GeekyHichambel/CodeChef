#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x;int n;
        cin >> n >> x;
	     int a=n/3;
	     int total=(n*x)-(a*x);
	     cout << total <<endl;
    }
	return 0;
}
