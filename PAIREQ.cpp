#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int solve(int arr[],int n){
    sort(arr,arr+n);
    int a=1,b=1;
    int x=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1])
        a++;
        else
        a=1;
        if(a>b)
        {
         b=a;
         x=arr[i-1];
        }
    }
    return x;
}
int main() {
     int t;int count=0;
     cin >> t;
     while (t--){
         int n;
         cin >> n;
         int arr[n];
         int count = 0;
         for (int i=0;i<n;i++){
             cin >> arr[i];
         }
         int x = solve(arr,n);
         for (int i=0;i<n;i++){
             if (arr[i]!=x){
                 count++;
             }
         }
         cout << count << endl;
     }
	return 0;
}
