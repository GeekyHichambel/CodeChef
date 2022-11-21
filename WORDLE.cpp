#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while(t--){
	     string s;
	     string T;
	     string m;
	     cin >>  s;
	     cin >>  T;
	     for (int i=0;i<5;i++){
	         if (s[i]==T[i]){
	             m.push_back('G');
	         }
	         else{
	             m.push_back('B');
	         }
	     }
	     cout << m <<endl;
	 }
	return 0;
}
