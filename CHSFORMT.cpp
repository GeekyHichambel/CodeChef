#include <iostream>
using namespace std;

int main() {
          int t;
          cin >> t;
          while(t--){
              int a,b;
              cin >> a >>b;
              int ti=a+b;
              if (ti<3){
                  cout<<1<<endl;
              }
              if (ti>=3&&ti<=10){
                  cout << 2<<endl;
              }
              if (ti>=11&&ti<=60){
                  cout <<3<<endl;
              }
              if(ti>60){
                  cout << 4 <<endl;
              }
          }
	return 0;
}
