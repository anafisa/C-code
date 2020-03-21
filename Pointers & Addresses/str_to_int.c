#include <stdio.h>

int toint(char* str){
    int n = 0;
    char* s = str;
    while(*s)
    {
        n = n*10 + (*s++ - '0');
    }
    return n;
}

int main()
{
    char str[] = "12345";
    printf("%d", toint(str));
    return 0;
}