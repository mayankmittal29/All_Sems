#include<stdio.h>
int main()
{
float a,b;
printf("Enter your temperature in Celsius : ");
scanf("%f",&a);
b=(a*1.8)+32;
printf("Your Temperature in Fahrenheit is :- %f\n",b);
return 0;
}