#include <iostream>
using namespace std;

int main() {
	  int t;
	  cin >> t;
	  while(t--){
	      int x,y;
	      cin >> x >> y;
	      int a1=500-(x*2);
	      int b1=1000-((x+y)*4);
	      int a2=500-((x+y)*2);
	      int b2=1000-(y*4);
	      int s1=a1+b1;
	      int s2=a2+b2;
	      if (s1>s2){
	          cout << s1 << endl;
	      }
	      else{
	          cout << s2 << endl;
	      }
	  }
	return 0;
}
