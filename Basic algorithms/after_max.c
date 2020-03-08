#include <stdio.h>
#define N 10

int main()
{
    double m, x;
    int counter=0;

    scanf("%lf", &x);
    m = x;

    while (x!= 0) {
        if (x >= m){
            m = x;
            counter = 0;
        }
        else
            counter ++;

        scanf("%lf", &x);
    }

    printf("%d", counter);

    return 0;
}