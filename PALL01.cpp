#include <iostream>
using namespace std;

int main() {
	  int t;
	  cin >> t;
	  while (t--){
	      int n;
	      cin >> n;
	      int temp=0;int comp=n;
	      while (n){
	         temp=(n%10)+(temp*10);
	         n/=10;
	      }
	      if (temp==comp){
	          cout << "wins" <<endl;
	      }
	      else{
	          cout << "loses" <<endl;
	      }
	  }
	return 0;
}
