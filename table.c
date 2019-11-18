#include<stdio.h>
void main()
{int i,a,b;
printf("Enter the of which table you want to print:",a);
scanf("%d",&a);
printf("Till what range you want table",b);
scanf("%d",&b);
for(i=1;i<=b;i++)
{printf("%d*%d=%d\n",a,i,a*i);
}}
