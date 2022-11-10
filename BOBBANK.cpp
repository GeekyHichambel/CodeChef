#include <iostream>
using namespace std;

int main() {
	 int t;
	 cin >>t;
	 while(t--){
	     int W;int X;int Y;int Z;
	     cin >>W>>X>>Y>>Z;
	     for (int i=0;i<Z;i++){
	         W+=X;
	         W-=Y;
	     }
	     cout << W <<endl;
	 }
	return 0;
}
