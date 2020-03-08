#include <stdio.h>

int main()
{
    double m, x;
    int counter=0;

    scanf("%lf", &x);
    m = x;

    while (x!= 0) {
        if (x < m){
            m = x;
            counter = 0;
        }
        else
            if (x == m)
                counter ++;

        scanf("%lf", &x);
    }

    printf("%d", counter);

    return 0;
}