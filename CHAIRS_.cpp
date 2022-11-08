#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--)
	{
	    int x;int y;
	    cin >>x >>y;
	    if (x<=y)
	    {
	        cout << "0" <<endl;
	    }
	    else
	    {
	    x=x-y;
	    cout << x <<endl;
	    }
	}
	return 0;
}
