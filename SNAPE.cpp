#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	   int t;
	   cin >> t;
	   while(t--){
	       int b,ls;
	       cin >> b >>ls;
	       cout << fixed;
	       cout.precision(5);
	       double min=sqrt(pow(double(ls),2)-pow(double(b),2));
	       double max=sqrt(pow(double(ls),2)+pow(double(b),2));
	       cout << min << " " <<max<<endl;
	   }
	return 0;
}
