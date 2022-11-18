#include <iostream>
using namespace std;

int main() {
	 int arr[9999];
	 for (int i=0;i<100;i++){
	     cin >> arr[i];
	     if (arr[i]==42){
	         break;
	     }
	     else{
	         cout << arr[i] <<endl;
	     }
	 }
	 
	return 0;
}
