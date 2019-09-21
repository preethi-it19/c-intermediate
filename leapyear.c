#include <stdio.h>
void main()
{
    int a;
    printf("enter a year");
    scanf("%d",&a);
    if(a%400==0)
   {
  if(a%4==0)
       {
         if(a%100!=0)
         printf("it is a leap year");
         else
         printf("not a leap year");
       }
    else
      printf("it is a leap year");
      }
   else
     printf("not a leap year");
}
