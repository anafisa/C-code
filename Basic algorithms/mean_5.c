#include <stdio.h>
#include <limits.h>

int main()
{
    double num1, num2, num3, num4, num5;
    int n;

   n = scanf("%lf%lf%lf%lf%lf", &num1, &num2, &num3, &num4, &num5);
   if (n != 5)
       return 1;

    printf("Result is %f !\n", (num1+ num2 + num3 + num4 + num5)/5);
    return 0;
}
