#include <iostream>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	  int N;int X;
	  cin >>N>>X;
	  if (N<6){
	      cout << X <<endl;
	  }
	  else{
	   if (N%6==0){
	  N=N/6;
	  X=N*X;
	  cout << X<<endl;
	   }
	   else{
	     N=N/6;
	     X=(N+1)*X;
	     cout << X<<endl;
	   }
	  }
	}
	return 0;
}
