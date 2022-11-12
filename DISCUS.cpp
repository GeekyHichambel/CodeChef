#include <bits/stdc++.h>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while(t--){
	     int A;int B;int C;
	     cin >> A>>B>>C;
	     int fin[3]={A,B,C};
	     sort(fin,fin+3);
	     cout << fin[2] <<endl;
	 }
	return 0;
}
