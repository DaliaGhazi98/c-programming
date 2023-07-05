#include "Function.h"
/*
 * Write a function that fills memory with a constant byte.
 * Prototype: char *_memset(char *s, char b, unsigned int n);
 * The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
 * Returns a pointer to the memory area s
 * FYI: The standard library provides a similar function: memset. Run man memset to learn more.
 *
 * */

int main(void)
{
    char buffer[98] = {0x00};

    simple_print_buffer(buffer, 98);
    _memset(buffer, 0x01, 95);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);
    return (0);
}
