#include <stdio.h>


int count_digits(const char *str)
{
    int i=0, num=0;
    while (str[i] !='\0'){
        if ('0' <= str[i] && str[i] <= '9')
            num++;
        i++;
    }
    return num;
}

int main()
{
    char s[] = "1Hello567!";
    printf("%d\n", count_digits(s));
    return 0;
}