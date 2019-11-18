#include<stdio.h>
       void main()
{
    int m, i,n,a,b,k,p;
     printf("Enter the initial and ending no of tables:");
     scanf("%d%d",&a,&b);
     printf("Enter the initial and ending sequence no of tables:");
     scanf("%d%d",&k,&p);

for
     (n=a;n<=b;n++){
if(n%2==0)
{
for
     (i=k;i<=p;i++)
{
     printf("%d*%d=%d\n",n,i,n*i);
}

}
else {printf("Entered no is odd\n");}
}}
 
 
