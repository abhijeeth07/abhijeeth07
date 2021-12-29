#include<stdio.h>
main()
{
	char k;
	printf("enter a character\n");
	scanf("%c",&k);
	switch(k>='A' && k<='Z')
	{
		case 1:
			k=k+32;
			printf("lower case letter of given char is %c",k);
		    break;
		case 0:
			switch(k>='a'&&k<='z')
			{
				case 1:
					k=k-32;
					printf("upper case letter of given char is %c",k);
					break;
				case 0:
					switch(k>='0' && k<='9')
					{
						case 1:
							printf("given char is a number");
							break;
						default :
							printf("it is undefined character");
					
					}
			
			}
	}
}
