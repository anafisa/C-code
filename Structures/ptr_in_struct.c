#include <stdio.h>

typedef struct {
    char str[5];
} ArrType;

typedef struct {
    char *str;
} PtrType;

ArrType arr = {'B','A','D','!', '\0'};
PtrType ptr = {"GOOD"};

int main()
{
    printf("%s ", arr.str);
    char *p = "IDEA";
    for (int i; i<5; i++)
        arr.str[i]= *p++;
    printf("%s \n", arr.str);

    //использование указателей в структурах упрощает работу с массивами
    printf("%s ", ptr.str);
    ptr.str = "IDEA";
    printf("%s \n", ptr.str);

}