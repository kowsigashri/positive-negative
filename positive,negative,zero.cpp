#include<stdio.h>
void main()
{
     int a;
     printf("Enter the value:");
     scanf("%d",&a);
     if(a==0)
          printf("Number is zero");
     else if(a<0)
          printf("Number is negative");
     else if(a>0)
          printf("Number is positive");
     else
         printf("Number valid number");
}
