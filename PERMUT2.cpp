#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
      for( ; ;){
	  int n;
	  cin >> n;
	  if (n==0){
	      break;
	  }
	      int arr[n];int temp[n];
	      bool flag=true;
	      for (int i=0;i<n;i++){
	      cin >> arr[i];
	      temp[arr[i]-1]=i+1;
	  }
	     for (int i=0;i<n;i++){
	         if (temp[i]!=arr[i]){
	             flag=false;
	             break;
	         }
	     }
	   if (flag==true){
	       cout << "ambiguous" <<endl;
	   }
	   else{
	       cout << "not ambiguous"<<endl;
	   }
     }
	return 0;
}
