#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("you must provide a file name to use this command.\n");
        return 1;
    }

    char *fileName = argv[1];
    FILE *file = fopen(fileName, "r");

    if (file == NULL)
    {
        printf("file does not exist.");
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
