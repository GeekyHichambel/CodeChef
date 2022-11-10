#include <bits/stdc++.h>
using namespace std;

int main() {
	 int t;
	 cin >>t;
	 while(t--){
	     int N;string S;
	     cin >> N;
	     cin >> S;
	     string s1=S.substr(0,N/2);
	     string s2=S.substr(N/2,N);
	     if (s1==s2){
	         cout << "YES" <<endl;
	     }
	     else{
	         cout << "NO" <<endl;
	     }
	 }
	return 0;
}
