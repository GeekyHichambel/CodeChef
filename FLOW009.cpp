#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
      int t;
      cin >>  t;
      while (t--){
          double q,p;
          cin >> q >> p;
          cout << fixed << setprecision(6);
          if (q>1000){
               cout << p*q*0.9 << endl;
          }
         else{
             cout << p*q  << endl;
         }
      }
	return 0;
}
