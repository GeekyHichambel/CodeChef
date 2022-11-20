#include <iostream>
using namespace std;
int min(int x,int y,int z){
    int ans=(y<z&&y<x)?(2):(z<y&&z<x)?(3):(1);
    return ans;
}
int main() {
	 int t;
	 cin >> t;
	 while (t--){
	     int a,b,c;
	     cin >> a >> b >> c;
	     int ans=min(a,b,c);
	     if (ans==2){
	         cout << "Bob" <<endl;
	     }
	     if (ans==3){
	         cout << "Alice" <<endl;
	     }
	     if (ans==1){
	         cout << "Draw" <<endl;
	     }
	 }
	return 0;
}
