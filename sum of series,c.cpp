#include<stdio.h>
int main()
{  
  float x,sum, t,d;
  int i,N;
  printf("enter the value of x");
  scanf("%f",&x);
  printf("enter the number of terms");
  scanf("%f",&N);
  sum=1,t=1;
    for(i=1;i<1;i++)
  {  
     d=((2*i)*(2*i-1));
     t=-t*x*x/d;
     sum=sum+t;
  }
    printf("the sum of the series =%f\n",sum);
    printf("number of terms =%d\n",N);
    printf("the value of x=%d\n",x);
    
} 
