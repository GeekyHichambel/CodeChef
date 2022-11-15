#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
         int t;
         cin >> t;
         while (t--){
             int x,y,d;
             cin >> x >> y>> d;
             int s=(x>y)?(x-y):(y-x);
             if (s<=d){
                 cout << "YES" <<endl;
             }
             else{
                 cout << "NO" <<endl;
             }
         }
	return 0;
}
