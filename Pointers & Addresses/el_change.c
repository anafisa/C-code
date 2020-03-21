#include <stdio.h>

void fun(int* a, int* b){

    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main(int argc, char* argv[])
{
    int a=7, b=8;
    printf("%d %d \n", a, b);
    fun(&a, &b);
    printf("%d %d", a, b);
    return 0;
}