#include <iostream>
using namespace std;

int main() {
       int t;
       cin >> t;
       while (t--){
           int n;
           cin >> n;
           int count=n/10;
           if (n%10!=0){
               count++;
           }
           if (n>10){
           cout << count << endl;
           }
           else{
               cout << "1" <<endl;
           }
       }
	return 0;
}
