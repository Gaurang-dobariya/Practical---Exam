#include<stdio.h>

main()
{
	char name[100];
	char course[100];
	int i;
	
	printf("Enter Student Name = ");
	gets(name);
	
	printf("Enter Course Name = ");
	gets(course);
	
	fopen("data.txt","w");
	
	if(i==0)
	{
		printf("file not Open");
	}
	else
	{
		printf("Data Add Successfull");		
	}
	
	fclose();
	
}
