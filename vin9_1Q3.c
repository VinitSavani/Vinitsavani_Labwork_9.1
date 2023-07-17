#include<stdio.h>

void main()
{
  int j,i,s;
  
  printf("Enter arraay size:");
  scanf("%d",&s);

  char name[s];

  printf("Enter a string:");
  scanf("%s",&name);
  
  for(i=0;i<=s;i++)
  {
	if(name[i]>=65&&name[i]<=90)
	{
	  name[i]=name[i]+32;
	}
	 else if (name[i]>=97&&name[i]<=122)
	{
	 name[i]=name[i]-32;
	}
  }
  
printf("toggel case:%s",name);

}