#include <stdio.h>

int main(int argc, char *argv[])
{

    if (argc < 2) 
    {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }
    
    char *fileName = argv[1];
    FILE *file = fopen(fileName, "r");

    if (file == NULL)
    {
        perror("fopen");
        return 1;
    }

    char buffer[256];

    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        printf("%s", buffer);
    }

    fclose(file);
    return 0;
}
