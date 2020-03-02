#include <stdio.h>

int main()
{
    int x, y, c = 0;
    scanf("%d", &x);
    y = x;

    while (y > 0){
        c = c*10 + (y%10);
        y = y/10;
    }
    printf("%d", c == x);
    return 0;
}