#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while (t--){
	     int n;
	     cin >> n;
	     int arr[n];
	     int count=0;
	     int s=0;
	     for (int i=0;i<n;i++)
	     {
	         cin >> arr[i];
	         if (arr[i]==1){
	             count++;
	         }
	         else{
	             s++;
	         }
	     }
	      if (n%2!=0){
	         cout << "-1" << endl;
	     }
	     else{
	        int fin = abs(count-s)/2;
	        cout << fin <<endl;
	      }
	 }
	return 0;
}
