#include <iostream>
using namespace std;

int main() {
            int t;
            cin >> t;
            while(t--){
                int N;int X;
                cin >> N >> X;
                N=N-X;
                int a=N/4;
                if (N%4!=0){
                    a++;
                }
                if (N<=0){
                    a=0;
                }
                cout << a << endl;
            }
	return 0;
}
