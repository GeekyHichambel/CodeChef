#include <iostream>
using namespace std;

int main() {
       int l,b;
       cin >> l >> b;
       int area=l*b;
       int peri=2*(l+b);
       int gr;string gre;
       if (peri==area){
           gre="Eq";
           gr=peri;
       }
       if (peri>area){
           gre="Peri";
           gr=peri;
       }
       if (area>peri){
           gre="Area";
           gr=area;
       }
       cout << gre << endl << gr << endl;
	return 0;
}
