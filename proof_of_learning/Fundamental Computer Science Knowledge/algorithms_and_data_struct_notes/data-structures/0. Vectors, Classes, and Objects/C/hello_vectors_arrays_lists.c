// Usage: gcc hello_vectors_arrays_lists.c -o hello_vectors_arrays_lists && ./hello_vectors_arrays_lists

#include "hello_vectors_arrays_lists.h"
#include <stdio.h>

void hello_vectors_arrays_lists() {
    printf("Hello, Vectors, Arrays, and Lists!\n");
}

int add(int a, int b){
    return a + b; 
}

int main(){
    hello_vectors_arrays_lists(); 
    int result = add(2, 3); 
    printf("The result is %d\n", result);
    return 0;
}