#include <iostream>
using namespace std;

int main() {
	  char x,y;
	  cin >> x >>y;
	  if (x=='G'&&y=='G'){
	      cout << 'G' <<endl;
	  }
	  else{
	  if ((x=='G'&&y=='R')||(x=='R'&&y=='G')||(x=='B'&&y=='R')||(x=='R'&&y=='B')||(x=='R'&&y=='R')){
	      cout << 'R' <<endl;
	  }
	  else{
	      cout << 'B' <<endl;
	  }
	  }
	return 0;
}
