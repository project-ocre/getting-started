/*
 * Copyright © 2024 Contributors to Project Ocre, which has been established as Project Ocre a Series of LF Projects, LLC.
 * Distributed by an Apache 2.0 License.
 */

#include <stdio.h>

//Ocre  container entrypoint
void on_init()
{
   printf("**** on_init() called ****\n\n");
   printf("\
        ██     ██ ███████ ██████   █████  ███████ ███████ ███████ ███    ███ ██████  ██   ██    ██ \n\
        ██     ██ ██      ██   ██ ██   ██ ██      ██      ██      ████  ████ ██   ██ ██    ██  ██  \n\
        ██  █  ██ █████   ██████  ███████ ███████ ███████ █████   ██ ████ ██ ██████  ██     ████   \n\
        ██ ███ ██ ██      ██   ██ ██   ██      ██      ██ ██      ██  ██  ██ ██   ██ ██      ██    \n\
         ███ ███  ███████ ██████  ██   ██ ███████ ███████ ███████ ██      ██ ██████  ███████ ██    \n\
                                                                                                   \n\
                                                                                 powered by Ocre   \n");

   printf("\n\n Update v4\n");
}