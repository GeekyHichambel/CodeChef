#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool prime(int n){
    for(int j=2;j*j<=n;j++)
	                   {
	                    if (n%j==0)
	                     {
	                       return false;
	                     }
	                   }
	                    return true;
}
int main() {
   int t;
   cin >> t;
   while(t--){
       int n;
       cin >> n;
       if (n==1){
           cout << "no" <<endl;
       }
       else{
           if (prime(n)==0){
               cout << "no" <<endl;
           }
           else{
               cout << "yes" <<endl;
           }
       }
   }
	return 0;
}
