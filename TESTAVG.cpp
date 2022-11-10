#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int A;int B;int C;
	    cin >>A>>B>>C;
	    float avg=(A+B)/2;
	    float avg_1=(B+C)/2;
	    float avg_2=(C+A)/2;
	    if (avg<35||avg_2<35||avg_1<35){
	        cout << "Fail" <<endl;
	    }
	    else{
	        cout << "Pass" <<endl;
	    }
	}
	return 0;
}
