#include <iostream>
using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--){
            int s;double gross;double hra;double da;
            cin >> s;
            cout << fixed;
            cout.precision(2);
            if (s>=1500){
                hra=500;
                da=(double(s)/100)*98;
                 gross=s+hra+da;
                 cout << gross <<endl;
            }
            else{
              gross=double(s)*2;
              cout << gross <<endl;
            }
        }
	return 0;
}
