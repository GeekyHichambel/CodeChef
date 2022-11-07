#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--)
	{
	    int X,Y,Z;
	    cin >> X >> Y >> Z;
	    if (Z>=Y)
	    {
	        cout << X << endl;
	    }
	    else{
	        if (Y%Z==0)
	        {
	         X=X*(Y/Z);
	         cout << X << endl;
	        }
	        else{
	            X=X*(Y/Z+1);
	            cout << X << endl; 
	        }
	    }
	}
	return 0;
}
