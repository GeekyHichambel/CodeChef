#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

void solve(string s){
    char temp[1000];int count = 0;
    for (int i=0;i<s.length();i++){
	     if (s[i]>96&&s[i]<123){
	         cout << s[i];
	     }
	     else if (((s[i]>=33 && s[i]<=47 )|| (s[i]>=91&&s[i]<=96))&&( s[i]!=')'&& s[i]!='(') ){
	         temp[count] = s[i];
	         count++;
	     }
	     if (s[i]==')'){
	         count--;
	         cout << temp[count];
	     }
	 }
	 cout << endl;
} 

int main() {
	int t;
	cin >> t;
	while(t--){
	 string str;
	 cin >> str;
	 solve(str);
	}
	return 0;
}
