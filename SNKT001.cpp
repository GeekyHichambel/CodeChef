#include <iostream>
using namespace std;

int main() {
    int TT;
    cin >>TT;
    while (TT--)
    {
        int XX,YY,ZZ;
        cin >> XX >> YY >>ZZ;
        string str;
        str = (XX-YY>=0)?(str="PIZZA"):(XX-ZZ>=0)?(str="BROWNIE"):(str="NOTHING");
        cout << str <<endl;
     }
	return 0;
}
