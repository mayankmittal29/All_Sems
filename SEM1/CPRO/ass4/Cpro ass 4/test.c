#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 1000

int main() {
    FILE *file = fopen("u.txt", "r");  // open file for reading
    if (file == NULL) {
        printf("Failed to open file\n");
        return 1;
    }

    char **lines = (char **) malloc(sizeof(char *) * MAX_LINE_LENGTH);
    if (lines == NULL) {
        printf("Failed to allocate memory\n");
        return 1;
    }

    char buffer[MAX_LINE_LENGTH];
    int i = 0;

    // read file line by line
    while (fgets(buffer, MAX_LINE_LENGTH, file)) {
        char *line = (char *) malloc(sizeof(char) * (strlen(buffer) + 1));
        if (line == NULL) {
            printf("Failed to allocate memory\n");
            return 1;
        }
        strcpy(line, buffer);
        lines[i++] = line;
    }

    fclose(file);  // close the file

    // print the lines
    for (int j = 0; j < i; j++) {
        printf("%s", lines[j]);
        free(lines[j]);  // free each line after printing
    }
    free(lines);  // free the array of lines

    return 0;
}
