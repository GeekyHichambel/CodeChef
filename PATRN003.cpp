#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--){
	    int N,k;
	    cin >> N>>k;
	    int arr[N];
	    for (int i=0;i<N;i++)
	    {
	        cin >> arr[i];
	    }
	    sort(arr,arr+N);
	    int tmp;
	    for (int g=0;g<N;g++)
	    {
		 for (int j=0;j<N;j++)
		 {
    	  if (arr[j]==arr[j+1])
			{
             for (tmp=j;tmp<N;tmp++)
             {
              arr[tmp]=arr[tmp+1];
             }
             j--;
             N--;
			}
		}
	    }
	    int s=0;
	    s=arr[N-1]+arr[N-2];
	    cout << s;
	}
	return 0;
}
