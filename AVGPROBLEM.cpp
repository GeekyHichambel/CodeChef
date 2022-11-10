#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >>t;
	 while(t--){
	     float A;float B;float C;
	     cin>>A>>B>>C;
	     A=((A+B)/2);
	     if (A>C){
	         cout << "YES" <<endl;
	     }
	     else{
	         cout << "NO"<<endl;
	     }
	     
	 }
	return 0;
}
