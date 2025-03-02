#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student
{
    char email[100];
    char name[20];
    int roll_no;
    int marks[3];
} student;
int main()
{
    int n;
    printf("Enter the number of students --->");
    scanf("%d", &n);
    struct student database[n];
    printf("Now Enter the details of these students...\n");
    for (int i = 0; i < n; i++)
    {
        char a[100];
        char b[20];
        char c[3];
        printf("For Student%d\n", i + 1);
        printf("Enter the email- \n");
        scanf("%s", a);
        strcpy(database[i].email, a);
        printf("Enter the name- \n");
        scanf(" %[^\n]s", b);
        strcpy(database[i].name, b);
        printf("Enter the roll No.- \n");
        scanf("%d", &database[i].roll_no);
        printf("Enter the marks in Assignment 1,2 3 --> \n");
        scanf("%d %d %d", &database[i].marks[0], &database[i].marks[1], &database[i].marks[2]);
    }
    FILE *ptr;
    ptr = fopen("mittal.txt", "w");
    if (ptr == NULL)
    {
        printf("File not opened successfully...");
    }
    fprintf(ptr, "SNO.     NAME         ROLL NO       EMAIL                   Marks1     Marks2     Marks3 \n");
    for (int j = 0; j < n; j++)
    {
        fprintf(ptr, "%d    %s   %d     %s        %d        %d       %d\n", j + 1, database[j].name, database[j].roll_no, database[j].email, database[j].marks[0], database[j].marks[1], database[j].marks[2]);
    }
    fclose(ptr);
    printf("Now after Reading all data from file ...\n");
    FILE *f;
    f = fopen("mittal.txt", "r");
    if (f == NULL)
    {
        printf("File not opened successfully...");
    }
    while (!feof(f))
    {
        char ch = fgetc(f);
        printf("%c", ch);
    }
    fclose(f);
    return 0;
}