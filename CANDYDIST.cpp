#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while (t--){
	     int n;int m;
	     cin >> n >> m;
	     if (m>n){
	         cout << "NO" <<endl;
	     }
	     else{
	          int ans=n/m;
	          if (ans%2==0&&n%m==0){
	              cout << "YES" <<endl;
	          }
	          else{
	              cout << "NO" <<endl;
	          }
	     }
	 }
	return 0;
}
