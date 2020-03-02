#include <stdio.h>
#include <limits.h>

int main()
{
    /* http://scc-forge.lancaster.ac.uk/open/char/types/ints */

    printf("char: %ld byte\n", sizeof(char)); /* определяем размер в байтах как long int */

    printf("%d\n", CHAR_MIN);
    printf("%d\n", CHAR_MAX);

    printf("unsigned char: %ld byte\n", sizeof(unsigned char));

    printf("%d\n", UCHAR_MAX);

    printf("short: %ld bytes\n", sizeof(short));
    printf("%d\n", SHRT_MIN);
    printf("%d\n", SHRT_MAX);

    printf("unsigned short: %ld bytes\n", sizeof(unsigned short));
    printf("%d\n", USHRT_MAX);

    printf("int: %ld bytes\n", sizeof(int));
    printf("%d\n", INT_MIN);
    printf("%d\n", INT_MAX);

    printf("unsigned int: %ld bytes\n", sizeof(unsigned int));
    printf("%u\n", UINT_MAX);

    printf("long int: %ld bytes\n", sizeof(long int));
    printf("%ld\n", LONG_MIN);
    printf("%ld\n", LONG_MAX);

    printf("unsigned long int: %ld bytes\n", sizeof(unsigned long int));
    printf("%lu\n", ULONG_MAX);

    return 0;
}
