/*
 * Copyright © 2025 Contributors to Project Ocre, which has been established as Project Ocre a Series of LF Projects, LLC.
 * Distributed by an Apache 2.0 License.
 */

#include <stdio.h>
#include <locale.h>

// Application entry point
int main() 
{
    // Set the locale to support Unicode characters
    setlocale(LC_ALL, "");
    
    printf("\n\
        ██     ██ ███████ ██████   █████  ███████ ███████ ███████ ███    ███ ██████  ██   ██    ██ \n\
        ██     ██ ██      ██   ██ ██   ██ ██      ██      ██      ████  ████ ██   ██ ██    ██  ██  \n\
        ██  █  ██ █████   ██████  ███████ ███████ ███████ █████   ██ ████ ██ ██████  ██     ████   \n\
        ██ ███ ██ ██      ██   ██ ██   ██      ██      ██ ██      ██  ██  ██ ██   ██ ██      ██    \n\
         ███ ███  ███████ ██████  ██   ██ ███████ ███████ ███████ ██      ██ ██████  ███████ ██    \n\
                                                                                                   \n\
                                                                                 powered by Ocre   ");
    printf("\n\n Update v4\n\n");
    return 0;
}