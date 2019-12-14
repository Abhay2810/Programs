##  1 To Find whether Number is Negative or Positive.
```
#include<stdio.h>

void main()

{

int a;

printf("Enter your No:");

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
```
OUTPUT
Enter your No:4
No is Positive
```
## 2  To check no is Even or Odd.
```
#include <stdio.h>

void main()

{

int a;

printf("Enter no:");

scanf("%d",&a);

if (a%2==0)

{printf("No is even\n");}

else

{printf("No is odd\n");}

}
```
```
OUTPUT 
Enter no:2
No is even
```
## 3  To Find Table of Even Number.
```
#include<stdio.h>

void main()

{
int m, i,n,a,b,k,p;

printf("Enter the initial and ending no of table:");
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
```
OUTPUT
Enter the initial and ending no of tables:4
6
Enter the initial and ending sequence no of tables:3
7
4*3=12
4*4=16
4*5=20
4*6=24
4*7=28
Entered no is odd
6*3=18
6*4=24
6*5=30
6*6=36
6*7=42

```
## 4 To Calculate Experience of the Employees. 
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
```
OUTPUT 
Enter no. of employees:4
Enter their experience:12
5
6
8
Total experience:31
```
## 5 To Find the Factorial of a Number.
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
```
OUTPUT
Enter No:6
Factorial:720
```
## 6 To Convert Fahrenheit to Celcius.
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
```
Output:
 Enter Temperature in Fahrenheit:78
Temperature in Centigrade Scale:25.555555
```

## 7 Use of Function.
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
```
Output:
Hey Tiwari 
```
## 8  To Print the College name using Function.
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
```
Output:

Guru Nanak Dev Engineering College 
```
## 9 To Find whether Number is Prime or not.
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
```
Output:
Enter no 6
No is not prime
```
## 10 To Find Prime Number  between 1 to 100.
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
```
Output:
The prime numbers between 1 and 100 
      2
      3
      5
      7
      11                                                              
      13
      17
      19
      23
      29
      31
      37
      41
      43
      47
      53
      59
      61                                                              
      67                                                              
      71
      73                                                              
      79
      83
      89                                                               
      97
```
## 11 To Design a Program by the Use of Switch Statement. 
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
```
Output:
Enter an operator(+,-,/,%,*):+                                  
Enter two numbers:
56
45
The addition is:101
```
## 12 To find Table till the Desired Range. 
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
```
Output:     
Enter the starting  of which table you want to print:3
Till what range you want table6
3*1=3                                                           
3*2=6                                                           
3*3=9
3*4=12
3*5=15                                                          
3*6=18
```
## 13 To Print the Tables of Desired Numbers. 
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
```
Output:
Enter the initial and ending no of tables:4
6
4*1=4
4*2=8
4*3=12
4*4=16
4*5=20
4*6=24
4*7=28
4*8=32
4*9=36
4*10=40
5*1=5
5*2=10
5*3=15
5*4=20
5*5=25
5*6=30
5*7=35
5*8=40
5*9=45
5*10=50
6*1=6
6*2=12
6*3=18
6*4=24
6*5=30
6*6=36
6*7=42
6*8=48
6*9=54
6*10=60
```
## 14 To Find the Addition of the two Number. 
```
#include<stdio.h>
int main()
{
int a;          
int b;                   
int c;                                                        
        printf("Enter first no-");                            
scanf("%d",&a);
        printf("Enter second no-");
scanf("%d",&b);
c=a+b;
    printf(" %d + %d = %d\n",a,b,c);
return 0;
}
```
```
Output:
Enter first no-5
Enter second no-43                                     
5 + 43 = 48
```
## 15 To Find the Sum of the Matrix(Home Made Method). 
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
```
Output:
/1921002$ ./a.out
_   __   _                                            
|a b||p q|
|c d||r s|
_   __   _                                            
4
5
6
7
2
3
8
9
_   _
|48 57|
|68 81|                                              
 _   _
```
## 16 To Print the data of the Students.
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
```
Output:

```
## 17 To Find the Sum of Matrix by the Array. 
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
```
Output:
Enter the number of rows and columns of matrix        
2                                                     2
Enter the elements of first matrix
3                                                     
4
5
6
Enter the elements of second matrix
6
7                                                     
8
5
Sum of entered matrices:-
9       11                                            
13      11
```
## 18 To Find whether Number is Positive,Negative or Zero.
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
```
Output:
Enter Your No:7
No is positive
```
## 19 Use of Puts in C Programming.
```
#include<stdio.h>
int main()
{
puts(" Hello Friends");
puts("Chai Pilo Friends ");
}
```
```
Output:
Hello Friends 
Chai Pilo Friends 
```
## 20 To Find the Square of a Number. 
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
```
Output:
Enter Number:6
Square of Entered Number:36
```
## 21 To Print * Sign in a Desirable Method. 
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
```
Output:
*
**
***
****
```
## 22 To Print Pascal Triangle with * Sign. 
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
```
Output:
11111
01110
00100
00000
```
## 23  To Find Greater Array among the Others.
```

```
```
Output:

```
## 24 Even  Array
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
```
Otput:

```
## 25 To Print Face Structure in C programming. 
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
```
Output:

```
## 26 To find Cube of a Number. 
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
```
Output:


```
<!--stackedit_data:
eyJoaXN0b3J5IjpbMjExODI3NjIyNCwtNzQ4MjI1NDAyLC0xMT
MwNjgyNjYxLC0xMDE4Njc1MzE5LC00OTE5NDEzNTIsLTE1NjAx
MzI2ODZdfQ==
-->
