#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while (t--){
	     int x , y;
	     cin >> x >>y;
	     int count = 0;
	     if (x<y){
	     for (int i=x;i<y;i++){
	         if (i%10==0){
	             count++;
	         }
	      }
	     }
	     else{
	         for (int i=y;i<x;i++){
	         if (i%10==0){
	             count++;
	         }
	      }
	     }
	     cout  << count  <<endl;
	 }
	return 0;
}
