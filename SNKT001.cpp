#include <iostream>
using namespace std;

int main() {
    int TT;
    cin >>TT;
    while (TT--)
    {
        int XX,YY,ZZ;
        cin >> XX >> YY >>ZZ;
        if (XX>=YY&&XX<ZZ)
        {
            cout << "PIZZA" <<endl ;
        }
        else{ 
            if (XX>=ZZ&&XX<YY)
        {
            cout << "BROWNIE"<<endl;
        }
        else 
        {
            cout  << "NOTHING"<<endl;
        }
     }
    }
	return 0;
}
