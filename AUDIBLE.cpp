#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--)
	{
	    int X;
	    cin >> X;
	    if (X>=67&&X<=45000)
	    {
	        cout << "YES"<<endl;
	    }
	    else {
	        cout << "NO"<< endl;
	    }
	}
	return 0;
}
