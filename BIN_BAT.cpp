#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t ;
	while (t--){
	    int n,a,b;
	    cin >>  n >>  a >> b;
	    int ti=0;
        while(n){
            ti+=a;
            n=n/2;
            if (n==0){
                break;
            }
            ti+=b;
        }
	    cout << ti-(a+b) << endl;
	}
	return 0;
}
