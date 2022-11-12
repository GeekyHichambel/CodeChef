#include <iostream>
using namespace std;

int main() {
	    int t;
	    cin >> t;
	    while(t--){
	        int X,Y,Z;
	        cin >> X>>Y>>Z;
	        int ti=Y/X;
	        if (ti>Z){
	            cout << "0" <<endl;
	        }
	        else{
	        Z=Z-ti;
	        cout << Z <<endl;
	        }
	    }
	return 0;
}
