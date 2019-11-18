#include<stdio.h>
void main()
{
int a,b;
char operator;
printf("Enter an operator(+,-,/,%,*):");
scanf("%c",&operator);
printf("\nEnter two numbers:\n");
scanf("%d",&a,&b);
switch(operator)
{
case'+':printf("The addition is:%d\n,",(a+b));
break;
case'-':printf("The subtraction is:%d\n,",(a-b));
break;
case'/':printf("The division is:%d\n,",(a/b));
break;
case'%':printf("The remainder is:%d\n,",(a%b));
break;
case'*':printf("The multiplication is:%d\n,",(a*b));
break;
default:printf("Enter a valuid operator");

break;


}}
