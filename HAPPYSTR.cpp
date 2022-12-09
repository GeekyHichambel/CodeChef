#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>> t;
	while(t--){
	    string s;
	    cin >> s;
	    bool flag = false;int count=0;int slen = s.length();
	    for (int i=0;i<slen;i++){
	        if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
	            count++;
	        }
	        else{
	            count = 0;
	        }
	        if (count==3){
	            flag = true;
	            break;
	        }
	    }
	    if (flag){
	        cout << "Happy" << endl;
	    }
	    else{
	        cout << "Sad" << endl;
	    }
	 }
	return 0;
}
