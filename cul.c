#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{

    if (strcmp(strlwr(argv[1]), "install") == 0)
    {
        if (argv[2])
        {
            if (argv[3])
            {
                printf("Downloading %s version of %s", argv[3], argv[2]);
            }
            else
            {
                printf("Downloading %s\n", argv[2]);
            }
        }
        else
        {
            printf("\033[1;31mError: Not specified what to install.\033[1;0m");
        }
    }
    else if (strcmp(strlwr(argv[1]), "help") == 0)
    {
        printf("Here's the link to C language documentation: \033[1;32mhttps://devdocs.io/c/\033[1;0m");
    }
    else if (strcmp(strlwr(argv[1]), "info") == 0)
    {
        printf("This is a command line utility for c language, started as a project by Atri Thaker(Github ID: \033[1;32mhttps://github.com/atrithakar\033[1;0m) on 14th April 2023 as an attempt to create a command line utility to install various header files for c language. This is an open source project and anyone can contribute to it.\nInspiration was taken from pip of python language.");
    }
    return 0;
}