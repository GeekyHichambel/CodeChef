#include <iostream>
using namespace std;

int main() {
       int t;
       cin  >> t;
       while (t--){
           char id;
           cin >> id;
           if (id=='b'||id=='B'){
               cout << "BattleShip" <<endl;
           }
           if (id=='c'||id=='C'){
               cout << "Cruiser" <<endl;
           }
           if (id=='D'||id=='d'){
               cout << "Destroyer" <<endl;
           }
           if (id=='F'||id=='f'){
               cout << "Frigate" <<endl;
           }
       }
	return 0;
}
