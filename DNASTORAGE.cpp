#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
	  int t;
	  cin >> t;
	  while(t--){
	      int n;
	      cin >> n;
	      string s;
	      cin >> s;
	      string temp;
	      for (int i=0;i<n;i=i+2){
	          if (s[i]=='0'&&s[i+1]=='0'){
	              temp.push_back('A');
	          }
	          if (s[i]=='0'&&s[i+1]=='1'){
	              temp.push_back('T');
	          }
	          if (s[i]=='1'&&s[i+1]=='0'){
	              temp.push_back('C');
	          }
	          if (s[i]=='1'&&s[i+1]=='1'){
	              temp.push_back('G');
	          }
	      }
	      cout << temp <<endl;
	  }
	return 0;
}
