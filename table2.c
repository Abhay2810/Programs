#include<stdio.h>
       void main()
{
    int i,n,a,b,k,p;
     printf("Enter the initial and ending no of tables:");
     scanf("%d %d",&a,&b);
     
for
     (n=a;n<=b;n++)
{
for
     (i=1;i<=10;i++)
{
     printf("%d*%d=%d\n",n,i,n*i);
}
}
}

