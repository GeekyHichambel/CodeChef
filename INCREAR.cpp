#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	    int t;
	    cin >> t;
	    while(t--){
	        int x,y;
	        cin >> x >> y;
	        if (y>x){
	            cout << y-x << endl;
	        }
	        else{
	            if ((x-y)%2==0){
	                cout << (x-y)/2 <<endl;
	            }
	            else{
	                cout << (((x+1)-y)/2)+1 <<endl;
	            }
	        }
	    }
	return 0;
}
