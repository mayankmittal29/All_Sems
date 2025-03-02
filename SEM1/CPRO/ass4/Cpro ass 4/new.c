#include <stdio.h>
#include <stdlib.h>
void update(FILE *inp)
{
    while (1)
    {
    char c= fgetc(inp);
    if(!((c>=48)&&(c<=57)))
    {
    fprintf(inp,"\n");
    }
    }
}
int main(int argc, char const *argv[])
{
    FILE *inp;
    inp = fopen("u.txt", "r");
    if (inp == NULL)
    {
        exit(1);
    }
    //update(inp); // seperates both number and name
    char no[100][50];
    char name[100][20];
    char address[100];
    int i = 0;
    int p = 0;
    while (p < 200)
    {
        char r = (char)fgetc(inp);
        int k = 0;
        while (r != ',' && !feof(inp))
        {
            no[i][k++] = r;
            r = (char)fgetc(inp);
        }
        no[i][k] = 0; // make last character of string null
        if (feof(inp))
        { // check again for EOF
            break;
        }
        i++;
        p = p + 2;
    }
    int h = 1;
    int u = 1;
    while (h < 200)
    {
        char e = (char)fgetc(inp);
        int q = 0;
        while (e != ',' && !feof(inp))
        {
            no[i][q++] = e;
            e = (char)fgetc(inp);
        }
        no[u][q] = 0; // make last character of string null
        if (feof(inp))
        { // check again for EOF
            break;
        }
        u++;
        h = h + 2;
    }
    fclose(inp);
    FILE *out = fopen("out.txt", "w");
    for (int j = 0; j < 100; j++)
    {
        fprintf(out, "<doctypehtml1>\n");
        fprintf(out, "<html>\n");
        fprintf(out, "<body>\n");
        fprintf(out, "%s\n",no[j]);
        fprintf(out, "%s\n",name[j]);
        //fprintf(out, "%s\n",address[j]);
        fprintf(out,"</body>\n");
        fprintf(out,"</html>\n"); // print array
    }
    fclose(out);
    return 0;
}