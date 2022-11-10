#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while(t--){
	     float A;float B; int C; int D;
	     cin >>A>>B>>C>>D;
	     A=(A-C);
	     B=(B-D);
	     if (A<B){
	         cout << "First" <<endl;
	     }
	     if (B<A){
	             cout << "Second"<<endl;
	         }
	     if(A==B){
	         cout << "Any" << endl; 
	     }
	}
	return 0;
}
