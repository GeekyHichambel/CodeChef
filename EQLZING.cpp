#include <iostream>
using namespace std;

int main() {
        int t;
        cin >>t;
        while(t--){
            int a,b;
            cin >> a>>b;
            if (abs(a-b)%2!=0){
                cout << "NO" <<endl;
            }
            else{
                cout << "YES" <<endl;
            }
        }
	return 0;
}
