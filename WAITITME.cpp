#include <iostream>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--)
	{
	    int k,x;
	    cin >>k>>x;
	    k=k*7;
	    k=k-x;
	    cout << k<<endl;
	}
	return 0;
}
