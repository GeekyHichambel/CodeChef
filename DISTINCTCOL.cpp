#include <bits/stdc++.h>
using namespace std;

int main() {
	 int t;
	 cin >>t;
	 while (t--){
	     int N;
	     cin >>N;
	     int a[N];
	     for (int i=0;i<N;i++)
	     {
	        cin >> a[i];
	     }
	     int arr=a[0];
	     for (int i=0;i<N;i++){
	         if (arr<a[i]){
	             arr=a[i];
	         }
	     }
	     cout << arr <<endl;
	 }
	return 0;
}
