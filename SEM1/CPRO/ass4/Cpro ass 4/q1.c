#include <stdio.h>
typedef struct complex
{
float real;
float imaginary;
}complex;
complex add(complex n1, complex n2);
complex subtract(complex n1, complex n2);
complex multiply(complex n1, complex n2);
int main()
{
    complex n1,n2;
    printf("Enter the details of first complex number...i.e real and imaginary part\n");
    scanf("%f %f",&n1.real,&n1.imaginary);
    printf("Enter the details of second complex number...i.e real and imaginary part\n");
    scanf("%f %f",&n2.real,&n2.imaginary);
    int opcode;
    printf("Enter the operation code :- add-0,sub-1,mul-2 \n");
    scanf("%d", &opcode);
    switch (opcode)
    {
    case 0:
    { 
        complex res=add(n1,n2);
        printf("RESULT-- (%f) + i (%f)\n",res.real,res.imaginary);
        break;
    }
    case 1:
    {
        complex res=subtract(n1,n2);
        printf("RESULT-- %f + i %f\n",res.real,res.imaginary);
        break;
    }
    case 2:
    {
        complex res=multiply(n1,n2);
        printf("RESULT-- %f + i %f\n",res.real,res.imaginary);
        break;
    }
    default:
    {
        printf("Invalid operation code!!");
    }
    }
    return 0;
    }
complex add(complex n1, complex n2)
{
complex ans;
ans.real=n1.real+n2.real;
ans.imaginary=n1.imaginary+n2.imaginary;
return ans;
}
complex subtract(complex n1, complex n2)
{
complex ans;
ans.real=n1.real-n2.real;
ans.imaginary=n1.imaginary-n2.imaginary;
return ans;
}
complex multiply(complex n1, complex n2)
{
complex ans;
ans.real=(n1.real*n2.real)-(n1.imaginary*n2.imaginary);
ans.imaginary=(n1.real*n2.imaginary)+(n2.real*n1.imaginary);
return ans;
}