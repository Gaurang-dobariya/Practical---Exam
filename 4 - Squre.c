#include<stdio.h>

main()
{
	int n,area;
	int *p = n;
	int *pa = area;
	
	p = &n;
	pa = &area;
	
	printf("Enter Area of Squre = ");
	scanf("%d",&n);
	
	*pa = (*p)*(*p)*(*p);
	
	printf("Area Of Squre = %d",*pa);

}
