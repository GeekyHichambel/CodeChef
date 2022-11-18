#include <iostream>
using namespace std;

int main() {
	      int t;
	      cin >> t;
	      while(t--){
	          int n,k;
	          cin >> n >> k;
	          int arr[n];
	          int count=0;
	          for (int i=0;i<n;i++){
	              cin >>arr[i];
	              arr[i]=arr[i]+k;
	              if (arr[i]%7==0){
	                  count++;
	              }
	          }
	          cout << count << endl;
	      }
	return 0;
}
