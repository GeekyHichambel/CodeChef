#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--){
	    char first,second,third;
	    cin >> first >> second >> third;
	    char option1,option2;
	    cin >> option1 >> option2;
	    if (first == option1 || first == option2){
	        cout << first <<endl;
	    }
	    else{
	        if (second==option1||second==option2){
	           cout << second <<endl;
	        }
	        else{
	            cout << third << endl;
	        }
	    }
	}
	return 0;
}
