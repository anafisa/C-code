#include <stdio.h>

int main()
{
    int x = -1, max;
    scanf("%d", &max);

    while (x != 0){
        scanf("%d", &x);
        max = (x < max && x > 0 )? x : max;
    }
    printf("%d", max);
    return 0;
}