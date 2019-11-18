#include<stdio.h>
int main()
{
int c;
int a,b;
printf("Enter no. of employees:");
scanf("%d",&a);
printf("Enter their experience:");
for(int i=1;i<=a;i++){
scanf("%d",&b);
c+=b;
}
printf("Total experience:%d\n",c);

}
