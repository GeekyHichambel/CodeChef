#include <iostream>
using namespace std;

int main() {
       int n;
       cin >>n;
       int arr[n];
       for (int i=0;i<n;i++){
           cin >> arr[i];
       }
       int l;int u;
       for (int i=0;i<n;i++){
           if (arr[i]%2==0){
               l++;
           }
           else{
               u++;
           }
       }
       if (l>u){
           cout << "READY FOR BATTLE"<<endl;
       }
       else{
           cout << "NOT READY"<<endl;
       }
	return 0;
}
