#include <iostream>
using namespace std;
int sum(int a,int b){
    int s=0;
    while(a--){
        for (int i=b;i>0;i--){
            s+=i;
        }
        b=s;
        s=0;
    }
    return b;
}
int main() {
       int t;
       cin >> t;
       while(t--){
           int d,n;
           cin >> d >> n;
           int ans=sum(d,n);
           cout << ans << endl;
       }
	return 0;
}
