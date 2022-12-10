#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s,r;
	    cin >> s;
	    cin >> r;
	    int count=0;
	    for (int i=0;i<n;i++){
	        if (s[i]!=r[i]){
	            count++;
	        }
	    }
	    if (count%2==1){
	        cout << 0 << endl;
	    }
	    else{
	        cout << 1 << endl;
	    }
	}
	return 0;
}
