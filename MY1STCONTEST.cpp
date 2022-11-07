#include <iostream>
using namespace std;

int main() {
	int N;int A; int B;
	cin >> N>> A>> B;
	int t=N-A;
	N=N-(A+B);
	cout << t << " "<< N;
	return 0;
}
