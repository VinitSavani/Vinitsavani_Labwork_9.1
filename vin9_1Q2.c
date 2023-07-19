#include<stdio.h>

void main()
{
	
	char name[99];
	
	printf("Enter any string = ");
	gets(name);
	
	strlwr(name);
	
	printf("Uppercase String =");
	puts(name);
}
