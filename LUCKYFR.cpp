#include <iostream>
using namespace std;
int solve(int n){
    int count = 0;
    while(n){
	        if (n%10==4){
	            count++;
	        }
	        n/=10;
	    }
	    return count;
}
int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    cout << solve(n) << endl;
	}
	return 0;
}
