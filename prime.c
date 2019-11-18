#include<stdio.h>
void main()
{
            int a,i,p=0;
printf("Enter no ");
scanf("%d",&a);
for(i=2;i<a;i++)
{
if(a%i==0){p=1;
break;
}}
if(p==1)
printf("No is not prime\n");
else
printf("No is Prime\n");
}

