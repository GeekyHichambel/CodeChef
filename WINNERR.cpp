#include <iostream>
using namespace std;

int main() {
	   int t;
	   cin >> t;
	   while(t--){
	       int P_A;int P_B;int Q_A;int Q_B;
	       cin >> P_A >>P_B >> Q_A >>Q_B;
	       int p=(P_A>P_B)?(P_A):(P_B);
	       int q=(Q_A>Q_B)?(Q_A):(Q_B);
	       if (p<q){
	           cout << "P" <<endl;
	       }
	       if (q<p){
	           cout << "Q" <<endl;
	       }
	       if (p==q){
	           cout << "TIE" <<endl;
	       }
	   }
	return 0;
}
