#include <iostream>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int N;int M;int K;
	    cin >>N>>M>>K;
	    M=M-K;
	    if (N<=M){
	        cout << "Yes" <<endl;
	    }
	    else{
	        cout << "No" <<endl;
	    }
	}
	return 0;
}
