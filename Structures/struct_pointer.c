#include <stdio.h>

typedef struct {
    char *str;
} Ptrtype;

Ptrtype ptr = {"GOOD"};

int main()
{
    printf("%s \n", ptr.str);
    ptr.str = "IDEA";
    printf("%s \n", ptr.str);

}