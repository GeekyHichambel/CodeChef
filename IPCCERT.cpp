#include <iostream>
using namespace std;

int main() {
          int n,m,k;int count=0;
          cin >> n >> m >> k;
          while(n--){
              int arr[k+1];
                  int last;int sum=0;
                  for (int j=0;j<k+1;j++){
                  cin >> arr[j];
                  if (j<k){
                      sum+=arr[j];
                  }
                  else{
                      last = arr[j];
                  }
              }
                   if (sum>=m&&last<=10){
                  count++;
              }
          }
          cout << count << endl;
	return 0;
}
