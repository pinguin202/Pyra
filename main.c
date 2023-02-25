#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main( int argc, char **argv )
{
    const char *filename = argv[1]; //see filename

    FILE *file; // create file pointer
    char cmd[150];
    int c = 0; // create char

    fopen( filename, "r" ); // open file

    file = fopen( filename, "r" );

    if ( file == NULL )
    {
        printf("No such file or diretory\n");
        exit(1);
    }

    // execute the pyra code

    fclose(file);

    free(filename);
    free(&cmd);
    free(file);
    free(&c);

    return 0;
}
