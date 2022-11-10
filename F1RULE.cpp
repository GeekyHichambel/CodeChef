#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while(t--){
	     float X;int Y;
	     cin >>X>>Y;
	     if (Y<=((X/100)*107)){
	         cout << "YES"<<endl;
	     }
	     else{
	         cout <<"NO"<<endl;
	     }
	 }
	return 0;
}
