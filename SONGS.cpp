#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >>t;
	 while(t--){
	     int N;int X;
	     cin >>N>>X;
	     N=N/3;
	     X=N/X;
	     cout <<X<<endl;
	 }
	return 0;
}
