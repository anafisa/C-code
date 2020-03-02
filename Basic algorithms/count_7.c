#include <stdio.h>

int main()
{
    int x, c = 0;
    scanf("%d", &x);

    while (x!= 0){
        if (x % 10 == 7)
            c ++;
        x = x / 10;}

    printf("%d", c);


    return 0;
}