#include <iostream>
using namespace std;

int main() {
	 int p[4];
	 cin >>p[0]>>p[1]>>p[2]>>p[3];
	 int count=0;int sum=0;
	 for (int i=0;i<4;i++){
	     if (p[i]>=10){
	        count++;
	     }
	 }
	 cout << count <<endl;
	return 0;
}
