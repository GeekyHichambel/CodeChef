#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while (t--){
	     int x;
	     cin >> x;
	     string str;int car=0;int ch=0; 
	     cin >> str;
	     for (int i=0;i<14;i++){
	         if (str[i]=='C'){
	             car+=2;
	         }
	         else {
	             if (str[i]=='N'){
	             ch+=2;
	             }
	             else {
	                 car++;
	                 ch++;
	             }
	           }
	         }
	         if (car>ch){
	             cout << 60*x << endl;
	         }
	         else{
	             if (ch>car){
	                 cout << 40*x << endl; 
	             }
	             else{
	             cout << 55*x <<endl;
	             }
	         }
	 }
	return 0;
}
