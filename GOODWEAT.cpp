#include <iostream>
using namespace std;

int main() {
	      int t;
	      cin >> t;
	      while(t--){
	          int arr[7];int rain=0;int sunny=0;
	          for (int i=0;i<7;i++){
	          cin >> arr[i];
	          if (arr[i]==0){
	              rain++;
	          }
	          else{
	              sunny++;
	          }
	          }
	          if (sunny>rain){
	              cout<<"YES"<<endl;
	          }
	          else{
	              cout << "NO" <<endl;
	          }
	      }
	return 0;
}
