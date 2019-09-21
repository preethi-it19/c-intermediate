#include <stdio.h>
void main()
{
  int a,b,c,d;
  printf("enter operand1\t");
  scanf("%d",&a);
  printf("enter operator\n 1.+,2.-,3.*,4./\n");
  scanf("%d",&b);
  printf("enter operand2\t");
  scanf("%d",&d);
  switch(b)
{
 case 1:
 c=a+d;
 printf("%d",c);
 break;
 case 2:
 c=a-d;
 printf("%d",c);
 break;
 case 3:
 c=a*d;
 printf("%d",c);
 break;
 case 4:
 c=a/d;
 printf("%d",c);
 break;
 default:
 printf("invalid number");
  }
}

