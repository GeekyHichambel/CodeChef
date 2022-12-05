#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while(t--){
	    int n,k;
	    cin >> n >> k;
	    int temp=n/k;
	    if (n%k!=0){
	        temp++;
	    }
	    cout << temp << endl;
	 }
	return 0;
}
