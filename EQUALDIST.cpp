#include <iostream>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int A;int B;
	    cin >>A>>B;
	       if (A==B)
	        {
	         cout << "YES"<<endl;
	        }
	        else{
	            if (A>B)
	            {
	             A=A-B;
	             if (A%2==0)
	             {
	               cout << "YES"<<endl;  
	             }
	             else
	             {
	              cout << "NO"<<endl;
	             }
	            }
	            else
	            {
	              B=B-A;
	              if (B%2==0)
	              {
	                 cout << "YES"<<endl;  
	              }
	              else{
	                   cout << "NO"<<endl;
	              }
	            }
	        }
	    }
	return 0;
}
