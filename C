#include <stdio.h>
/* Include other headers as needed */
int main()
{
	int a=0,b=1,n,i=2;
  	scanf("%d",&n);
  	if(n==1)
      printf("%d",a);
  	else
  		printf("%d\n%d\n",a,b);
  	while(i<n)
    {
      a=a+b;
      b=a+b;
      if(n%2==0)
      	printf("%d\n%d\n",a,b);
      else
      {
        if(i<n-1)
        {
          printf("%d\n%d\n",a,b);
        }
        else
          printf("%d",a);
      }
      i+=2;
    }
    return 0;
}
