#include <stdio.h>
#include <stdlib.h>


int main()
{
	int *p; int *p2;
	p = (int*)malloc(2*sizeof(int));
	
	*p = 18;
	printf("The element allocated is %d \n",*p);
	
	p++;
	
	*p = 5;
	printf("The element allocated is %d \n",*p);
	
	p2 = (int*)realloc(p,sizeof(int));
	*p2 = 8;
	printf("The element allocated is %d \n",*p2);

	return 0;
}
