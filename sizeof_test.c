#include <stdio.h>
int main(void)
{
    size_t size_char = sizeof(char);
    size_t size_short = sizeof(short);
    size_t size_int = sizeof(int);
    size_t size_long = sizeof(long);
    size_t size_char_ptr = sizeof(char *);
    size_t size_int_prt = sizeof(int *);
    printf("char: %zu bytes\n",size_char);
    printf("short: %zu bytes\n",size_short);
    printf("int: %zu bytes\n",size_int);
    printf("long: %zu bytes\n",size_long);
    printf("char *: %zu bytes\n",size_char_ptr);
    printf("int *: %zu bytes\n",size_int_prt);
    return 0;
}
