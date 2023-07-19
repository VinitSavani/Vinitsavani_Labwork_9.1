#include<stdio.h>

void main()
{
	int a,v;
	
	printf("Enter array size = ");
	scanf("%d",&a);
	
	char name[a];
	
    printf("Enter any string = ");
	scanf("%s",&name);
	
   for(v=0;v<=a;v++)
   {
	  if(name[v]>=65&&name[v]<=90)
	    {
        	name[v]=name[v]+32;
	    }
	    else if (name[v]>=97&&name[v]<=122)
		{
	        name[v]=name[v]-32;
		}
	}
		
  printf("toggel case: %s",name);

}
