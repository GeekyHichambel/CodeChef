#include <iostream>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int A,B;
	    cin >>A>>B;
	    int fin;
	    fin=(A>=B)?(fin=A):(fin=B);
	    fin=7-fin;
	    cout << fin <<endl;
	}
	return 0;
}
