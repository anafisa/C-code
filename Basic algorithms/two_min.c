#include <stdio.h>
#define N 10

int main()
{
    double min1, min2, x=-1;


    scanf("%lf", &min1);
    scanf("%lf", &min2);

    if (min1 > min2){
        x = min2;
        min2 = min1;
        min1 = x;
    }

    scanf("%lf", &x);

    while (x!= 0) {

        if (x < min2 && x > min1)
            min2 = x;
        else if (x < min1)
            min2 = min1;
        min1 = x;

        scanf("%lf", &x);
    }

    printf("%.0f %.0f ", min1, min2);

    return 0;
}