#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
     
	int t;
	cin >> t;
	while (t--){
	    int n;
	    cin >> n;
	    string str;
	    cin >> str;
	    int count = 0;
	    for (int i=0;i<n;i++)
	    {
	        if (str[i]==str[i+1]){
	            count++;
	            if (str[i]=='1'){
	            str[i] = 'O';
	            }
	            else{
	                str[i] = '1';
	            }
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}
