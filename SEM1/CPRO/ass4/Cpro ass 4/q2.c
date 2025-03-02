#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct information
{
    char email[30];
    char name[20];
    int age;
    int roll_no;
    char hosteladdress[100];
} info;
void print_name_age(info database[],int n);
void print_name_email(info database[],int n);
void print_details(info database[],int n,char d[]);
int main()
{
    int n;
    printf("Enter the number of students....\n");
    scanf("%d", &n);
    info database[n];
    printf("Now Storing the information of all students...\n");
    for (int i = 0; i < n; i++)
    {
        char a[30];
        char b[20];
        char c[100];
        printf("For Student%d\n", i + 1);
        printf("Enter the email- \n");
        scanf("%s", a);
        strcpy(database[i].email, a);
        printf("Enter the name- \n");
        scanf(" %[^\n]s",b);
        strcpy(database[i].name, b);
        printf("Enter the age between 17 to 22- \n");
        scanf("%d", &database[i].age);
        printf("Enter the roll No.- \n");
        scanf("%d", &database[i].roll_no);
        printf("Enter the Hostel Address- \n");
        scanf(" %[^\n]s",c);
        strcpy(database[i].hosteladdress, c);
    }
    char d[100];
        printf("Calling first function.....\n");
        print_name_age(database,n);
        printf("\n");
        printf("Calling Second function.....\n");
        print_name_email(database,n);
        printf("\n");
        printf("Calling Third function.....\n");
        scanf("%s",d);
        print_details(database,n,d);
    return 0;
}
void print_name_age(info database[],int n)
{
    int count=0;
    for (int j = 0; j < n; j++)
    {
        if (database[j].age == 19)
        {
            printf("%s\n", database[j].name);
            count++;
        }
    }
    if(count==0)
    {
    printf("There is no student of having age 19!!\n");
    }
}
void print_name_email(info database[],int n)
{
int count=0;
for(int p=0;p<n;p++)
{
if((database[p].email[0]=='I')||(database[p].email[0]=='T'))
{
printf("%s\n",database[p].name);
count++;
}
}
if(count==0)
{
printf("There is no student whose email starts with either 'T' or 'I' !!\n");
}
}
void print_details(info database[],int n,char d[])
{
for(int y=0;y<n;y++)
{
if(strcmp(d,database[y].email)==0)
{
printf("Details of that student is :-- \n");
printf("Name:-           %s\n",database[y].name);
printf("Email:-          %s\n",database[y].email);
printf("Age:-            %d\n",database[y].age);
printf("Roll No. :-      %d\n",database[y].roll_no);
printf("Hostel Address:- %s\n",database[y].hosteladdress);
return;
}
}
printf("No such Student of this email is in Database!!\n");
}