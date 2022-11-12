#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while(t--){
	     int A;int B;long long int gcd=1;long long int lcm=1;
	     cin >> A>>B;
	     int b=(A<B)?(B):(A);
	     int s=(A<B)?(A):(B);
	     for (int i=1;i<=s;i++){
	         if (A%i==0&&B%i==0){
	             gcd=i;
	         }
	     }
	     lcm=(s/gcd)*b;
	     cout << gcd <<" "<< lcm << endl;
	 }
	return 0;
}
