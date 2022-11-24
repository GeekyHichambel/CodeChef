#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,m,k,x;
	    cin >> n >> m >> k >> x;
	    int a=n*(k-1);
	    int mob=(n*k)+m;
	    int d=x%mob;
	    if (d==0||d-a>0){
	        cout << "YES" <<endl;
	    }
	    else{
	        cout << "NO" <<endl;
	    }
	}
	return 0;
}
