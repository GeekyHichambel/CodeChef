#include <iostream>
using namespace std;

int main() {
	int t;
	cin >>t;
	while (t--)
	{
	    int X;int H;
	    cin >> X>>H;
	    if (X>=H)
	    {
	        cout << "YES" <<endl;
	    }
	    else {
	        cout << "NO" <<endl;
	    }
	}
	return 0;
}
