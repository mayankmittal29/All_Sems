#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void modify(char buffer[])
{
    if((buffer[0]>=97)&&(buffer[0]<=122))
    {
    buffer[0]-=32;
    }
    for (int i = 0; i < strlen(buffer); i++)
    {
        if ((buffer[i] == '\n') || (buffer[i] == ' '))
        {
            if ((buffer[i + 1] >= 97) && (buffer[i + 1] <= 122))
            {
                buffer[i + 1] -= 32;
            }
            if ((buffer[i - 1] >= 97) && (buffer[i - 1] <= 122))
            {
                buffer[i - 1] -= 32;
            }
        }
        if ((buffer[i] == '.') || (buffer[i] == '!') || (buffer[i] == '?'))
        {
            if ((buffer[i - 1] >= 97) && (buffer[i - 1] <= 122))
            {
                buffer[i - 1] -= 32;
            }
        }
    }
    return;
}
int main()
{
    char buffer[1000];
    FILE *fptr;
    fptr = fopen("/home/mayank/inputfile.txt", "r");
    if (fptr == NULL)
    {
        printf("File not opened successfully..\n");
        exit(1);
    }
    fgets(buffer, 1000, fptr);
    fclose(fptr);
    modify(buffer);
    FILE *ptr;
    ptr = fopen("/home/mayank/Cpro ass 4/output.txt", "w");
    if (ptr == NULL)
    {
        printf("File not opened successfully..\n");
        exit(1);
    }
    fprintf(ptr, "%s", buffer);
    fclose(ptr);
    return 0;
}