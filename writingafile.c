#include <stdio.h>
int main()
{
    FILE *file;
    char text[] = "Hello, World!\nThis is a text file.\n";
    file = fopen("output.txt", "w");
    if (file == NULL)
	 {
        printf("Error opening file.\n");
        return 1;
     }
    fprintf(file, "%s", text);
    fclose(file);
    printf("Text written to the file successfully.\n");
    return 0;
}

