#include <stdio.h>
#include <stdlib.h>
int main()
{  char c='a';
    FILE *ptr = fopen("u.txt", "r");
    if(ptr==NULL)
    {
    exit(1);
    }
    do
    {
        char c = fgetc(ptr);
        if (!((c >= 48) && (c <= 57)))
        {
            fseek(ptr, -2, SEEK_CUR);
            fprintf(ptr, "\n");
        }
    }while(c!=EOF);
    char buffer[100];
    fgets(buffer, 100, ptr);
    printf("%s", buffer);
    fclose(ptr);
    return 0;
}