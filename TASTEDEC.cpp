#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >>T;
	while (T--)
	{
	 int X;int Y; 
	 cin >> X >> Y;
	 X=X*2;
	 Y=Y*5;
	 if (X>Y)
	 {
	     cout << "Chocolate" << endl;
	 }
	 if (Y>X)
	 {
	   cout << "Candy" << endl;  
	 }
	 if (X==Y)
	 {
	     cout << "Either" << endl;
	 }
	}
	return 0;
}
