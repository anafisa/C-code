#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define N 10

int main()
{
    int a[N];
    int i, el;
    double r, near;

    srand(time(NULL));
    scanf("%lf", &r);

    a[0] = rand()%100;
    near = fabs((double)a[0] - r);
    el = a[0];

    for(i = 1; i < N; i++){
        a[i] = rand()%100;
        if (near > fabs((double)a[i]-r)){
            near = fabs((double)a[i]-r);
            el = a[i];}
    }

    for(i = 0; i < N; i++){
        printf("%d ", a[i]);
    }
    printf("\n%f ", el);
    return 0;
}