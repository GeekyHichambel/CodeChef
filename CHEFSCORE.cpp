#include <iostream>
using namespace std;

int main() {
	int T;
	cin >>T;
	while (T--)
	{
	    int N,X,Y;int sum=0;int i=1;
	    cin >> N >>X >>Y;
	      if (Y==0)
	      {
	        cout << "YES" <<endl;
	      }
	      else
	      {
	        while (i<=N)
	        {
	         sum += X;
	          if (sum==Y)
	          {
	           cout << "YES" <<endl;
	           break;
	         }
	           if (i==N)
                 {
                  cout << "NO" << endl;
                  break;
                 }
	         i++;
	        }
	      }
	}
 }
