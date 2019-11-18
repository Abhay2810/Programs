#include <stdio.h>
void main()
{
        float C,F;
        printf("Enter Temperature in Fahrenheit:",F);
        scanf("%f",&F);
     
        C=5*(F-32)/9;
        printf("Temperature in Centigrade Scale:%f\n",C);
}
