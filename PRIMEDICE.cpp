#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >> t;
	 while (t--){
	     int a,b;
	     cin >> a>>b;
	               int inc=0;
	               for(int j=2;j<=(a+b)/2;j++)
	                   {
	                    if ((a+b)%j==0)
	                     {
	                        inc++;
	                        break;
	                     }
	                    }
	                     if (inc==0 && (a+b)!=1)
	                     { 
	                       cout << "Alice" <<endl;
	                     }
	                     else{
	                         cout << "Bob" <<endl;
	                     }
	 }
	return 0;
}
