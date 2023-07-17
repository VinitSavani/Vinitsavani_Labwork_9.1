#include<stdio.h>

void main()
{
  int j,i,s;
  
  printf("Enter arraay size:");
  scanf("%d",&s);

  char n[s];

  printf("Enter a string:");
  scanf("%s",&n);
  
  for(i=0;i<=s;i++)
  {
	if(n[i]>=97&&n[i]<=122)
	{
	
	  n[i] = n[i] - 32;
	}
  }
  
printf("Upparcase is:%s",n);

}