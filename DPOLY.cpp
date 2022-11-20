#include <iostream>
using namespace std;

int main() {
	  int t;
	  cin >> t;
	  while(t--){
	      int n;
	      cin >> n;
	      int arr[n];
	            for (int i=0;i<n;i++){
	          cin >> arr[i];}
	          if (n==1){
	              cout << "0" <<endl;
	          }
	      else{
	          int count=0;
	      for (int i=0;i<n;i++){
	          if (arr[i]==0){
	              continue;
	          }
	          count=i;
	      }
	       cout << count <<endl;
	      }
	  }
	return 0;
}
