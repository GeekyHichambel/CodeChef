#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while (t--){
	     int N;int M;
	     cin >> N >>M;
	     if (M==0){
	         cout << N*2 << endl;
	     }
	     else{
	         if (M>N){
	           cout << N <<endl;
	         }
	         else{
	         M=N+(N-M);
	         cout << M <<endl; 
	         }
	     }     
	    }
	return 0;
}
