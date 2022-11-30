#include <iostream>
using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--){
            int x,y;
            cin >> x >> y;
            if (y==0){
                cout << x <<endl;
            }
            else{
                if (x>y){
                int diff=x-y;
                cout << (y*2)+diff << endl;
                }
                else{
                    cout << (y*2)-1 << endl;
                }
            }
        }
	return 0;
}
