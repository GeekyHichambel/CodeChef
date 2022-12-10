#include <iostream>
using namespace std;

int main() {
     int t;
     cin >> t;
     while(t--){
         int n;
         cin >> n;
         int arr[n];
         for (int i=0;i<n;i++){
             cin >> arr[i];
         }
         int min=10000;
         string v;
         cin >> v;
         for (int i=0;i<n;i++){
             if (v[i]=='0'){
                 if (arr[i]<min){
                     min = arr[i];
                 }
             }
         }
         cout << min << endl;
     }
}
