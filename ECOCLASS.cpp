#include <iostream>
using namespace std;

int main() {
	  int t;
	  cin >> t;
	  while (t--)
	  {
	      int n;
	      cin >> n;
	      int s[n];int d[n];
	      for (int i=0;i<n;i++){
	          cin >> s[i];
	      }
	      for (int i=0;i<n;i++){
	          cin >> d[i];
	      }
	      int count=0;
	      for (int i=0;i<n;i++){
	          if (s[i]==d[i]){
	            count++;
	          }
	      }
	      cout << count <<endl;
	  }
	return 0;
}
