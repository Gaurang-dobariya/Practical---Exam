#include<stdio.h>

struct car{
	
	char model[100];
	int year;
	int	price;
};

main()
{
	int n;
	int i;
	
	printf("Enter Number Of Cars = ");
	scanf("%d",&n);
	
	struct car c[n];
	
	for(i=1 ; i<n ; i++)
	{
		
		printf("Car = %d\n",i+1);
		printf("Enter Car Model = ");
		scanf("%s",&c[i].model);
		printf("Enter Car Year = ");
		scanf("%d",&c[i].year);
		printf("Enter Car Price = ");
		scanf("%d",&c[i].price);
		
	}
	
	printf("\n\n-----------Car Details---------------\n\n");
	
	for(i=1 ; i<n ; i++)
	{
		
		printf("Car = %d\n",i+1);
		printf("Car Model = %s\n",c[i].model);
		printf("Car Year = %d\n",c[i].year);
		printf("Car Price = %d\n",c[i].price);
		
	}
	
}
