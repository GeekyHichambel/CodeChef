#include <iostream>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int x1,x2,y1,y2;
	    cin >> x1>>y1>>x2>>y2;
	    int choice;
	    x1=x1+y1;
	    x2=x2+y2;
	    choice=(x1>x2)?(choice=x2):(choice=x1);
	    cout << choice << endl;
	}
	return 0;
}
