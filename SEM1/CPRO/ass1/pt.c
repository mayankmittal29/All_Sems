#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter any three numbers : ");
scanf("%d, %d, %d",&a,&b,&c);
if((a*a)==((b*b)+(c*c)))
{
printf("It's a Pythogarean Triplet!!");
}
else if((b*b)==((a*a)+(c*c)))
{
printf("It's a Pythogarean Triplet!!");
}
 else if((c*c)==((b*b)+(a*a)))
{
printf("It's a Pythogarean Triplet!!");
}
else{
    printf("Its not a Pythogarean Triplet");
}
return 0;
}