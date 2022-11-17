#include <iostream>
using namespace std;

int main() {
	  int t;
	  cin >> t;
	  while(t--){
	      int x,y,a,b;
	      cin >> x >> y >> a >> b;
	      int count=2;
	      if (x==a||y==b){
	          count--;
	          if (x==a&&y==b){
	              count--;
	          }
	      }
	      else{
	          if (y==a||x==b){
	              count--;
	              if (y==a&&x==b){
	                  count--;
	              }
	          }
	      }
	      cout << count << endl;
	  }
	return 0;
}
