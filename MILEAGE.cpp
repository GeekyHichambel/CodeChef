#include <iostream>
using namespace std;

int main() {
	  int t;
	  cin >> t;
	  while (t--){
	      int n,x,y,a,b;
	      cin >> n >> x >> y >> a >> b;
	      double pet=double(x)/double(a);
	      double die=double(y)/double(b);
	      pet=pet*double(n);
	      die=die*double(n);
	      if (pet<die){
	          cout << "PETROL" <<endl;
	      }
	      if (pet==die){
	          cout << "ANY" <<endl;
	      }
	      if (die<pet){
	          cout << "DIESEL" <<endl;
	      }
	  }
	return 0;
}
