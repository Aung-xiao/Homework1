#include <stdio.h>
int main()
{
	int  i,j;
	for(i=15;i<95;i+=10)
	{
	for(j=15;j<=i;j+=10)
	{
	  printf("%d*%d=%d",j,i,j*i);
	  printf("\t");

	}
	printf("\n");

	}


	

	return 0;
}
