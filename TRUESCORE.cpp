#include <iostream>
using namespace std;

int main() {
       int t;
       cin >> t;
       while(t--){
           int A;int B;int C;int D;
           cin >>A>>B;
           cin >>C>>D;
           if (C<A||D<B){
               cout << "IMPOSSIBLE" <<endl;
           }
           else{
               cout << "POSSIBLE" << endl;
           }
       }
	return 0;
}
