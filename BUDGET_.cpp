#include <iostream>
using namespace std;

int main() {
	int t;
	cin >>t;
	while (t--){
	int X;int Y;
	cin >>X>>Y;
	Y=Y*30;
	if (X>=Y){
	    cout << "YES"<<endl;
	}
	else{
	    cout <<"NO"<<endl;
	}
	}
	return 0;
}
