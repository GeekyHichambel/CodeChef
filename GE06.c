#include <stdio.h>
#include <math.h>

int main(void) {
    int n;int a=0;
    scanf("%d",&n);
    for (int i=2;i<n;i++)
    {
	     int count=0;
	     for (int j=2;j<=sqrt(i);j++)
	     {
	         if (i%j==0)
	         {
	           count++;
	           break;
	         }
	     }
	         if (count==0)
	         {
	             printf("%d ",i);
	             a++;
	         }
	  }
	  if (a==0)
	  {
	    printf("NO");
	  }
	return 0;
}
