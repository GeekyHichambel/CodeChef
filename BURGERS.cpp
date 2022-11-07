#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--)
	{
	    int A; int B;
	    cin >>A>>B;
	    int n=(A>=B)?(n=B):(n=A);
	    cout << n<<endl;
	}
	return 0;
}
