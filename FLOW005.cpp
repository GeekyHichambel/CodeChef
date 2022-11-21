#include <iostream>
using namespace std;

int main() {
	   int t;
	   cin >> t;
	   while (t--){
	       int n;int sum=0;
	       cin >> n;
	       if (n%100==0){
	           cout << n/100 <<endl;
	       }
	       else{
	           int a=n%100; 
	           sum+=n/100;  
	           int b=a%50;  
	           sum+=a/50;   
	           int c=b%10;  
	           sum+=b/10;   
	           int d=c%5;   
	           sum+=c/5;    
	           int e=d%2;    
	           sum+=d/2;    
	           cout << sum+e <<endl;
	       }
	   }
	return 0;
}
