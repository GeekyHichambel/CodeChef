#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	while (N--)
	{
	int a,b,c;
	cin >> a >> b >>c;
	int tmp[3]={a,b,c};
	sort(tmp,tmp+3);
	cout << tmp[1] <<endl;
	}
	return 0;
}
