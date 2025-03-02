#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr = fopen("u.txt", "r");
    while (1)
    {
        char c = fgetc(ptr);
        if (!((c >= 48) && (c <= 57)))
        {
            fseek(ptr, -2, SEEK_CUR);
            fprintf(ptr, "\n");
        }
    }
    char buffer[100];
    fgets(buffer, 100, ptr);
    printf("%s", buffer);
    fclose(ptr);
    return 0;
}