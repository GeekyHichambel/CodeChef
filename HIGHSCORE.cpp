#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	  int t;
	  cin >> t;
	  while (t--){
	      int n;
	      cin >> n;
	      int a,b,c,d;
	      cin >> a>>b >>c >>d;
	      if (a==n||b==n||c==n||d==n){
	          cout << n <<endl;
	      }
	      else{
	          int arr[]={a,b,c,d};
	          sort(arr,arr+4);
	          cout << arr[3] <<endl;
	      }
	  }
	return 0;
}
