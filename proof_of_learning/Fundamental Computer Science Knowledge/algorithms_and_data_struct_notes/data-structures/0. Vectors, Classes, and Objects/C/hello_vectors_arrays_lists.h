
// #ifndef directive check if header file has already been included (to prevent double inclusion)
#ifndef VECTORS_ARRAYS_LISTS_H
// #define directive defines macro to prevent multiple inclusions 
// what is a macro? A macro is a fragment of code which has been given a name.
// the macro for this header file is MYLIB_H
#define VECTORS_ARRAYS_LISTS_H

void printHello(void); 
int add(int a, int b); 

// #endif directive ends the conditional inclusion started by #ifndef
#endif
