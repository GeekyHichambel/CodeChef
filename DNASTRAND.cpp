#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int N;
	    cin >> N;
	    string s;
        cin >> s;
        string tmp;
	    for (int i=0;i<N;i++){
	        if (s[i]=='A'){
	          char a='T';
	          tmp.push_back(a);
	        }
	         if (s[i]=='T'){
	             char b='A';
	          tmp.push_back(b);
	        }
	        
	         if (s[i]=='C'){
	             char c='G';
	          tmp.push_back(c);
	        }
	         if  (s[i]=='G'){
	           char d='C';
	           tmp.push_back(d);
	        }
	    }
	    cout << tmp <<endl;
	}
	return 0;
}
