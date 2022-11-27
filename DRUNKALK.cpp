#include <iostream>
using namespace std;

int main() {
     int t;
     cin >> t;
     while (t--){
         int k;
         cin >> k;
         int eve=0;
         int odd=0;
         for (int i=1;i<=k;i++){
             if (i%2==0){
                 eve++;
             }
             else{
                 odd++;
             }
         }
         cout << (odd*3)-eve << endl;
     }
	return 0;
}
