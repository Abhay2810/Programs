##  1 To find whether no is negative or positive
```
#include<stdio.h>

void main()

{

int a;

printf("Enter your No:",a);

scanf("%d",&a);

if (a<0)

{

printf("No is negitive\n");

}

else

{

printf("No is Positive\n");

}

}
```
## 2  To check no is even or odd
```
#include <stdio.h>

void main()

{

int a;

printf("Enter no:",a);

scanf("%d",&a);

if (a%2==0)

{printf("No is even\n");}

else

{printf("No is odd\n");}

}
```
## 3 even table
```
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
```
## 4 To calculate experience
```
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
```
## 5 To find factorial
```
#include<stdio.h>

void main()

{

int a,b,factorial=1;

printf("Enter No:");

scanf("%d",&a);

for

(b=1;b<=a;b++)

{

factorial=factorial*b;

}

printf("Factorial:%d\n",factorial);

}
```
## 6 To convert fahrenheit to celcius
```
#include <stdio.h>

void main()

{

float C,F;

printf("Enter Temperature in Fahrenheit:",F);

scanf("%f",&F);

C=5*(F-32)/9;

printf("Temperature in Centigrade Scale:%f\n",C);

}
```
## 7 Use of function
```
#include<stdio.h>

int A();

int main()

{

A();

}

int A()

{

printf("Hey Tiwari\n");

}
```
## 8 Print of college name using function
```
#include<stdio.h>

int main()

{

a();

}

int a()

{

puts("Guru Nanak Dev Engineering College");

}
```
## 9 To find whether no is prime or not
```
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
```
## 10 To find prime no between 1 to 100
```
#include<stdio.h>

int main(){

int numbr,k,remark;

printf(" The prime numbers between 1 and 100 : \n");

for(numbr=2;numbr<=100;++numbr)

{

remark=0;

for(k=2;k<=numbr/2;k++){

if((numbr % k) == 0){

remark++;

break;

}

}

if(remark==0)

printf("\n %d ",numbr);

}

return 0;

}
```
## 11 Use of switch
```
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
```
## 12 To find range wise Table
```
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
```
## 13 To find table
```
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
```
## 14 To find sum 
```
#include<stdio.h>
int main()
{
int a;          
int b;                   
int c;                                                        
        printf("Enter first no-");                            scanf("%d",&a);
        printf("Enter second no-");
scanf("%d",&b);
c=a+b;
    printf(" %d + %d = %d\n",a,b,c);
return 0;
}
```
## 15 To find Matrix
```
#include<stdio.h>
int main()
{

    int a,b,c,d,p,q,r,s,k,l,m,n;
  printf("_   __   _\n|a b||p q|\n|c d||r s|\n_   __   _\n");
  scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&p,&q,&r,&s);          
                                                                k =a*p+b*r ;
  l =a*q+b*s ;
  m =c*p+d*r ;
  n =c*q+d*s ;
  printf("_   _\n|%d %d|\n|%d %d|\n_   _\n",k,l,m,n);

   return 0;
}
```
## 16 To fill Data 
```
#include  <stdio.h>
int main  ()
{
        char name[25];
        int marks[5],i,p;
      
printf("Enter no. of Entry:");

scanf("%d\n",&p);
printf("Enter Name      Marks\n");

for(i=1;i<p;i++)
{
scanf("%s%d\n",&name,&marks);
printf("%s      %d\n",name,marks);
}
```
## 17 To find array matrix
```
#include <stdio.h>
 
int main()
{     
   int m, n, c, d, first[10][10], second[10][10], sum[10][10];
 
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   printf("Enter the elements of first matrix\n");
      
   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &first[c][d]);
 
   printf("Enter the elements of second matrix\n");
      
   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
         scanf("%d", &second[c][d]);
      
   printf("Sum of entered matrices:-\n");
   
   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
         sum[c][d] = first[c][d] + second[c][d];
         printf("%d\t", sum[c][d]);
      }
      printf("\n");
   }
 
   return 0;
}
```
## 18 To find whether no is positive,negative or zero
```
#include<stdio.h>
void main()
{  
int a;
printf("Enter Your No:",a);
scanf("%d",&a);
if    
(a>0)
{  
printf("No is positive");
}     
else
{ if  
(a==0)
{printf("No is neutral");
}  
else
{  
printf("No is negative");}
}        
}
```
## 19 Use of Puts
```
#include<stdio.h>
int main()
{
puts(" Hello Friends");
puts("Chai Pilo Friends ");
}
```
## 20 To find square of
```
#include<stdio.h>
int main()
{
    int a,b;
      printf("Enter Number:",a);
      scanf("%d",&a);
      b = a*a;
      printf("Square of Entered Number:%d\n",b);
return 0;

}
```
## 23
```
#include<stdio.h>
void main()
{     
        int i,j;
for
(i=1;i<=4;i++)
{
for
(j=1;j<=i;j++)
{                                                                   
printf("*");
}
printf("\n");
}
}
```
## 24
```
#include<stdio.h>
int main()
{
int i,j;
for (i=1;i<=4;i++)
{
for(j=1;j<=5;j++)
{
if(j>=i  && j<=6-i)
printf("1");
else 
printf("0");
}
printf("\n");
}
return 0;

}
```
## 25
```
#include<stdio.h>
int main()
{
int i,j,k[10],l;
printf("Enter Array" );
for(i=1;i<=10;i++)
{
scanf("%d",&k[i]);
}for(i=1;i<=10;i++)
{
if(k[i])
}
}
```
## 26
```
#include<stdio.h>
int main()
{
      int a[10];
      int c;
printf("Enter nos:");
for(c=1;c<=10;c++)
{
scanf("%d",&a[c]);
}printf("\n");
    for(c=1;c<=10;c++)
{

if(a[c]%2==0)
{

printf("%d\n",a[c]);
}
}
return 0;
}
```
## 27
```
#include<stdio.h>
int face();
int face()
{
printf("___________________\n|    XXXXXXXXX    |\n|    ( ^   ^ )    |\n|    ( $   $ )    |\n|     \\  |  /     |\n|      \\ = /      |\n|       \\_/       |\n|        |        |\n|     $
}       
int main()
{
face();
}
```
## 28
```
#include<stdio.h>
int main()

{
        int a,b;
        printf("Enter Number:",a);
        scanf("%d",&a);
        b=a*a*a;
        printf("Cube of Entered Number:%d\n",b);

return 0;
}
```


<!--stackedit_data:
eyJoaXN0b3J5IjpbMTk0NzYzMzg5NywtMTU2MDEzMjY4Nl19
-->