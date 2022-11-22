#include <iostream>
using namespace std;

int main() {
	  int t;
	  cin >> t;
	  while (t--){
	      int a,b;
	      cin >> a>>b;
	      if (a==b){
	          cout << "YES" <<endl;
	      }
	      else{
	          float max=(a>b)?(a):(b);
	          float min=(a<b)?(a):(b);
	          bool flag=false;
             while(max){
                 if (max==min){
                     flag=true;
                     break;
                 }
                 max=max/2;
             }
             if (flag==true){
                 cout << "YES" <<endl;
             }
             else{
                 cout << "NO" <<endl;
             }
	      }
	  }
	return 0;
}
