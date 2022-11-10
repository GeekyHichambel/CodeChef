#include <iostream>
using namespace std;

int main() {
         int t;
         cin >>t;
         while(t--){
             int W;int X;int Y;int Z;
             cin >>W>>X>>Y>>Z;
             X=X-W;
             Y=Y*Z;
             if (Y<X){
                 cout << "Unfilled" <<endl;
             }
             if (Y>X){
                 cout << "overFlow" <<endl;
             }
             if (Y==X){
                 cout << "filled"<<endl;
             }
         }
	return 0;
}
