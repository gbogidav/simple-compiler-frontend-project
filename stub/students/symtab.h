/**********************************************
        CS415  Project 2
        Spring  2022
        Student Version
**********************************************/


#ifndef SYMTAB_H
#define SYMTAB_H

#include <string.h>
#include "attr.h"

/* The symbol table implementation uses a single hash     */
/* function. Starting from the hashed position, entries   */
/* are searched in increasing index order until a         */
/* matching entry is found, or an empty entry is reached. */

#define HASH_TABLE_SIZE 721

typedef struct { /* need to augment this */
    char *name;
    int offset;
    int size;
    Type_Expression type;
} SymTabEntry;

extern
void InitSymbolTable();

extern
SymTabEntry *lookup(char *name);

extern
void insert(char *name, Type_Expression type, int offset, int size);

extern
void PrintSymbolTable();


#endif
