#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	   int t;
	   cin >>t ;
	   while(t--){
	       int n;int count1=0;int count2=0;
	       cin >> n;
	       string arr[n];
	       for (int i=0;i<n;i++){
	           cin >> arr[i];
	           if (arr[i]=="START38"){
	               count1++; 
	           }
	           if (arr[i]=="LTIME108"){
	               count2++;
	           }
	       }
	       cout << count1 << " " << count2 <<endl;
	   }
	return 0;
}
