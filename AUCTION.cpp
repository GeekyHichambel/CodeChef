#include <iostream>
using namespace std;

int main() {
      int t;
      cin >>t;
      while(t--){
          int A,B,C;
          cin >> A >> B >> C;
          string win;
          win=(A>B && A>C)?(win="Alice"):(B>A&&B>C)?(win="Bob"):(win="Charlie");
          cout << win << endl;
      }
	return 0;
}
