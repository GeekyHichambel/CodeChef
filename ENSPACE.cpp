#include <iostream>
using namespace std;

int main() {
    int t;
    cin >>t;
    while (t--)
    {
        int n,x,y;
        cin >> n >> x >> y;
        y=y*2;
        if (x+y<=n){
            cout  << "YES"<<endl;
        }
        else {
            cout << "NO"<<endl;
        }
    }
	return 0;
}
