#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--){
	int N;int M;int X;
	cin >>N>>M>>X;
	N=2*(N+M);
	X=N*X;
	cout << X<<endl;
	}
	return 0;
}
