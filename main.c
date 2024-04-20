#include <stdlib.h>  // atoi, calloc (arrays), malloc (raw), ...
#include <stdio.h>   // printf, perror, sprintf, stderr, stdin, stdout, ...

/* Function Declaration. */
static
int
foo(
    int foo
);

int
main(void)
{
    /* Function Invocation. */
    int i = foo(10);
    printf("%d\n", i);
}

/* Function Definition. */
static
int
foo(
    int foo
){ 
    return foo * foo; 
}

