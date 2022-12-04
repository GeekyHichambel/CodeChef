#include <iostream>
using namespace std;

int main() {
           int n,h,x;
           cin >>  n  >> h >> x;
           int arr[n];
           for (int i=0;i<n;i++){
               cin >> arr[i];
           }
           if (x>=h){
               cout << "YES" << endl;
           }
           else{
               int tn=h-x;bool flag = false;
               for (int i=0;i<n;i++){
                   if (arr[i]==tn){
                       flag = true;
                       break;
                   }
               }
               if (flag==true){
                   cout << "YES" << endl;
               }
               else{
                   cout << "NO" << endl;
               }
           }
	return 0;
}
