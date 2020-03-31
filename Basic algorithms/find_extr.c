#include <stdio.h>
#include <math.h>

int main()
{
    double x = -5, a, b, y, min, i, val;
    int n;

    n = scanf("%lf%lf", &a, &b);

    if (n == 2){
        min = a * pow(x, 3) - b*x + pow(exp(1), -x/a);
        val = x;
        for( i=-5; i<=1; i += 0.01)
        {
            x = i ;
            y = a * pow(x, 3)  - b * x + pow(exp(1), -x/a);
            if (min > y){
                min = y;
                val = x;
            }
        }
    }
    else
        return 0;

    printf("%f\n%f", min, val);
    return 1;
}