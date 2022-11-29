#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a,b,c,d,e;
	    cin >> a >> b >> c >> d >> e;
	    int diff1 = c-a;
	    int diff2 = b-c;
	    float v1 = float(diff1)/d;
	    float v2 = float(diff2)/e;
	    if (v1>v2){
	        cout << "Kefa" << endl;
	    }
	    else{
	        if (v1<v2 ){
	            cout << "Chef" << endl;
	        }
	        else{
	            cout << "Draw" << endl;
	        }
	    }
	}
	return 0;
}
