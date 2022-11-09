#include <iostream>
using namespace std;

int main() {
        int t;
        cin >>t;
        while (t--){
            int X;int Y;
            cin >>X>>Y;
            if (Y>=X&&Y<=X+200){
                cout << "YES"<<endl;
            }
            else {
                cout <<"NO"<<endl;
            }
        }
	return 0;
}
