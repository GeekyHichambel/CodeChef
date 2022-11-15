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
	      for (int i=0;i<n;i++){
	      cin >> arr[i];
	      if (arr[i]>=10&&arr[i]<=60){
	          count++;
	      }
	      }
	      cout << count << endl;
	  }
	return 0;
}
