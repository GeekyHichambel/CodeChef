#include <iostream>
using namespace std;

int main() {
	int T;
	cin >>T;
	while (T--){
	    int s;int t;int e;
	    cin >>s>>t>>e;
	        if (s>t&&s>e){
	            cout << "Setter" <<endl;
	        }
	        if (t>s&&t>e){
	            cout << "Tester"<<endl;
	        }
	          if (e>t&&e>s){
	           cout << "Editorialist"<<endl;   
	          }
	}
	return 0;
}
