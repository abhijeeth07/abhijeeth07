#include<stdio.h>
main()
{
	int i=1,fact=1,n;
	printf("Enter the value ");
	scanf("%d",&n);
	while(i<=n);
	{
		fact=fact*i;
		i=i+1;
		
	}
	printf("%d",fact);
}
