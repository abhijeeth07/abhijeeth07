#include<stdio.h>  
#include<conio.h>  
main()  
{  
int n, r, sum = 0, i=1;   
printf("Enter a number");  
scanf("%d", &n);      
while (i<n)  
 {     r = n%i;
 if (r== 0)   
 {     sum= sum+ i;
 }   
 }  
if (sum==n)  
                      printf(" %d is a Perfect Number");  
           else  
                      printf("\n %d is not a Perfect Number");  
} 
