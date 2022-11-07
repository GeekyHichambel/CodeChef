#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--)
	{
	    int N;int a;int s=0;
	    cin >> N;
	    for (int i=1;s<=N;i++)
	    {
	     s+=i;
	     a=i; 
	    }
	    cout << a-1 <<endl;
	}
	return 0;
}
