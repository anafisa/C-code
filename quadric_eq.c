#include <stdio.h>
#include <math.h>

double Disc(double a, double b, double c)
{
    return b*b - 4*a*c;
}

int main() {
    double a, b, c, d;
    int n;
    n = scanf("%lf %lf %lf", &a, &b, &c);

    if (n != 3) {
        printf("Error: wrong input \n");
        return 1;
    }
    if (a == 0) {
        printf("Error: not a quadric equation \n");
        return 2;
    }
    d = Disc(a, b, c);
    if (d < 0){
        printf("No real roots \n");
        return 0;
    }
    d = sqrt(d);
    printf("%.5f %.5f \n", (-b-d)/(2*a), (-b+d)/(2*a));
    return 0;
}
