#ifndef BASE_
    #define BASE_

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <unistd.h>
    #include <sys/utsname.h>

    #define TRUE 1
    #define FALSE 0
    #define TEST -1
    #define HASH "#"
    #define EXIT "exit"
    #define CD "cd"
    #define SET "set"
    #define GET "get"
    #ifndef ENVVAR_
        struct HashTable {
            struct Node *HashTable[15];
            int numberOfElements, capacity;
        };

        struct Node{
            char *key;
            char *value;
            struct Node *next;
        };
    #endif
#endif