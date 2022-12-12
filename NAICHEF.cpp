#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(){
    cout << fixed;
    cout << setprecision(10);
	int t;
	cin >> t;
	while(t--){
	    int n;double a,b;
	    cin >> n >> a >> b;
	    double arr[n];double x=0;double y=0;
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	        if (arr[i]==a){
	            x++;
	        }
	        if (arr[i]==b){
	            y++;
	        }
	    }
	    double prb = (x/n)*(y/n);
	    cout << prb << endl;
	}
	return 0;
}
